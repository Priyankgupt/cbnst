
#include<stdio.h>
int fact(int);
int kcal1(int,int);
int kcal2(int ,int);
int main()
{
    int n;
    double k;
    double sum=0,f=0,x=0,p=1,q=1,s1=0,s2=1;
    printf("input n:");
    scanf("%d",&n);
    printf("input k:");
    scanf("%lf",&k);
    sum=k;
    for(int j=2;j<=n;j++)
    {
        f=fact(j);
        if(j%2==0)
        {
            p=kcal1(j-s1,k);
            sum=sum+((p*q)/f);
            s1++;

        }
        else{
            q=kcal2(j-s2,k);
            sum=sum+((p*q/f));
            s2++;
        }
    }
    printf("%lf",sum);
}
int fact(int x)
{
    int facto=1;
  for(int a=1;a<=x;a++)
  {
      facto=facto*a;
  }
  return facto;
}
int kcal1(int m,int z)
{

    if(m==0)
    {
        return 1;
    }
    else{

        return z*kcal1(m-1,z-1);
    }
}
int kcal2(int m1,int z1)
{
    if(m1==1)
    {
        return 1;
    }
    else{
        return (z1+1)*kcal2(m1-1,z1+1);
    }
}
