//Priyank Gupta B. Tech CSE Section SE 2015092
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float func(float x)
{
   return 2*x-log10(x)-7;
}
float derivFunc(float x)
{
   return 2-(1/(log(10)*x));
}
void newtonRaphson(float x0,float e,int n)
{
     int i=1;
     float x1;
     do
     {
      if(derivFunc(x0)==0)
      {
       printf("\n\nMathematical Error!!\n\n");
       return;
      }
       x1=x0-func(x0)/derivFunc(x0);
       x0=x1;
       i=i+1;
       if(i>n)
       {
        printf("\n\nNot Convergent!!\n\n");
        return;
       }
     }
      while(fabs(func(x1))>e);
      printf("\n\nThe value of root is: %.6f\n\n",x1);
}
int main()
{
    float x0,e;
    int n;
    printf("Enter initial guess: ");
    scanf("%f",&x0);
    printf("Enter tolerable error: ");
    scanf("%f",&e);
    printf("Enter maximum iteration: ");
    scanf("%d",&n);
    newtonRaphson(x0,e,n);
    return 0;
}
