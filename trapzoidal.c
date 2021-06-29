// Priyank Gupta B.tech CSE SE 2015092
#include <stdio.h>
float func(float x){
return 1/(1+x*x);
}
void Trapezoidal(){
int n,i;
float ul,ll,x=0,sum=0,s1,y=0;
float a[n+1];
printf("Enter n: ");
scanf("%d",&n);
printf("Enter upper limit: ");
scanf("%f",&ul);
printf("Enter lower limit: ");
scanf("%f",&ll);
float h=(ul-ll)/n;
for(i=0;i<=n;i++){
x=ll+i*h;
a[i]=func(x);
printf("%.1f\t%.4f",x,a[i]);
printf("\n");
}
s1=a[0]+a[n];
for(i=1;i<n;i++){
sum=sum+a[i];
}
sum=sum*2;
y=h*(s1+sum)/2;
printf("\nThe result is: %.5f",y);
}

int main(){
Trapezoidal();
return 0;
}
