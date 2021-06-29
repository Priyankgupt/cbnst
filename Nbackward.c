// Priyank Gupta B. Tech CSE Section SE 2015092
#include <stdio.h>
void NewtonBackward()
{
     int n,j,i,k=1;
     float x,u,u1,y;
     printf("Enter n: ");
     scanf("%d",&n);
     float a[n][n+1];
     printf("Enter the values of x and y: \n");
     for(j=0;j<n;j++)
     {
       for(i=0;i<2;i++)
       {
         scanf("%f",&a[j][i]);
       }
     }
     for(j=2;j<=n;j++)
     {
      for(i=j-1;i<=n-1;i++)
      {
        a[i][j]=a[i][j-1]-a[i-1][j-1];
      }
     }
     for(i=0;i<n;i++) 
     {
       printf("\n");
       for(j=0;j<=i+1;j++)
       {
         printf("%.4f ",a[i][j]);
       }
     }
      printf("\nEnter x: ");
      scanf("%f",&x);
      if((x<a[0][0]) || (x>a[n-1][0]))
      {
       printf("Input value is not found");
       return;
      }
       u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
       u1=u;

       y=a[n-1][1];
       for(i=2;i<=n;i++)
       {
         y=y+(u1*(a[n-1][i]/k));
         u1=u1*(u+(i-1));
         k=k*i;
       }
       printf("The result is: %.4f",y);
}
int main()
{
 NewtonBackward();
 return 0;
}
