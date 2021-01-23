 #include<stdio.h>
int fact(int);
int main()
{
    int n;
    int sum=0,f=0;
    printf("input n:");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        f=fact(j);
        sum=sum+f;
    }
    printf("%d",sum);
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
