// Priyank Gupta B.tech CSE SE 2015092
#include<stdio.h>
float func(float x){
return (1/(1+x*x));
}
void Simpson13(){
int n;
float ul,ll;
printf("Enter n: ");
scanf("%d",&n);
printf("Enter upper limit: ");
scanf("%f",&ul);
printf("Enter lower limit: ");
scanf("%f",&ll);
float h=(ul-ll)/n;
float a[n+1],x;
for(int i=0;i<=n;i++){
x=ll+i*h;
a[i]=func(x);
printf("%.2f\t%.4f",x,a[i]);
printf("\n");
}
float s2=0,s3=0;
float s1=a[0]+a[n];
for(int i=1;i<n;i++){
if(i%2!=0)
s2=s2+a[i];
else
s3=s3+a[i];
}
s2=s2*4;
s3=s3*2;

float y=h*(s1+s2+s3)/3;
printf("The result is: %.4f",y);
}
int main(){
Simpson13();
return 0;
}
