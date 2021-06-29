// Priyank Gupta B.tech CSE SE 2015092
#include <stdio.h>
void Lagrange(){
int n,i,j;
printf("Enter n: ");
scanf("%d",&n);
float x0,sum=0,q;
float x[n],y[n];
printf("Enter the values of x and y: \n");
for(i=0;i<n;i++){
scanf("%f",&x[i]);
}
for(i=0;i<n;i++){
scanf("%f",&y[i]);
}
printf("Enter x0: ");
scanf("%f",&x0);
for(i=0;i<n;i++){
q=1;
for(j=0;j<n;j++){
if(i!=j){
q=q*(x0-x[j])/(x[i]-x[j]);
}
}
sum=sum+q*y[i];
}
printf("The result is: %.4f",sum);
}
int main(){
Lagrange();
return 0;
}
