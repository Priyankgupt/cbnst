// Priyank Gupta B.tech CSE SE 2015092
#include<stdio.h>
float func(float x,float y){
return (x*x-y);
}
void RungeKutta(){
float x0,y0,h,xn;
printf("Enter initial conditions x0 and y0: ");
scanf("%f %f",&x0,&y0);
printf("Enter h and xn: ");
scanf("%f %f",&h,&xn);
float x=x0,y=y0;
while(x<xn){
float k1=h*func(x0,y0);
float k2=h*func(x0+h/2,y0+k1/2);
float k3=h*func(x0+h/2,y0+k2/2);
float k4=h*func(x0+h,y0+k3);
float k=(k1+2*k2+2*k3+k4)/6;
y=y+k;
x=x+h;
}
printf("%.2f\t%.4f",x,y);
}
int main(){
RungeKutta();
return 0;
}
