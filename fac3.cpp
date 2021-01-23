 #include<stdio.h>
int fact(int);
int kcal1(int,int);
int kcal2(int ,int);
int main()
{
    int n;
    double k;
    double sum=0,f=0,x=0;
    printf("input n:");
    scanf("%d",&n);
    printf("input k:");
    scanf("%lf",&k);
    for(double j=1;j<=n;j++)
    {
        f=fact(j);
        x=kcal1(j,k)*kcal2(j,k);
        sum=sum+(x/f);
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
