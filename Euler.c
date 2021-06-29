// Priyank Gupta B.tech CSE SE 2015092
#include<stdio.h>
float func(float x,float y){
return (y-x)/(y+x);
}
void Euler(){
float x0,y0,h,xn;
printf("Enter initial conditions x0 and y0: ");
scanf("%f %f",&x0,&y0);
printf("Enter h and xn: ");
scanf("%f %f",&h,&xn);
float x=x0,y=y0,k;
while(x<=xn){
printf("%.2f\t%.4f",x,y);
printf("\n");
k=h*func(x,y);
y=y+k;
x=x+h;
}
}
int main(){
Euler();
return 0;
}

