//Priyank Gupta B. Tech CSE Section SE 2015092
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float func(float x)
{
  return 2*x-log10(x)-7;
}
void bisection(float x0,float x1,float e)
{
   if (func(x0)*func(x1)>0)
   {
     printf("\nIncorrect initial guesses.\n\n");
     input();
   }
     float x2;
     do
     {
      x2=(x0+x1)/2;
      if(func(x0)*func(x2)<0)
      x1=x2;
      else
      x0=x2;
     }
      while(fabs(func(x2))>e);
      printf("\nThe value of root is: %.6f\n",x2);
      exit(0);
}

void input()
{
     float x0,x1,e;
     printf("Enter Lower guess(x0): ");
     scanf("%f",&x0);
     printf("Enter Upper guess(x1): ");
     scanf("%f",&x1);
     printf("Enter tolerable error(e): ");
     scanf("%f",&e);
     bisection(x0,x1,e);
}
int main() 
{
    input();
    return 0;
}
