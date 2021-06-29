// Priyank Gupta B.tech CSE SE 2015092
#include <stdio.h>
void NewtonForward(){
int n,j,i,k=1;
float x,u,u1,y;
printf("Enter n: ");
scanf("%d",&n);
float a[n][n+1];
printf("Enter the values of x and y: \n");
for(j=0;j<n;j++){
for(i=0;i<2;i++){
scanf("%f",&a[j][i]);
}
}
for(j=2;j<=n;j++){
for(i=0;i<=n-j;i++){
a[i][j]=a[i+1][j-1]-a[i][j-1];
}
}
for(i=0;i<n;i++){
printf("\n");
for(j=0;j<=n-i;j++){
printf("%.4f ",a[i][j]);
}
}
printf("\nEnter x: ");
scanf("%f",&x);
if((x<a[0][0]) || (x>a[n-1][0])){
printf("Input value is not found");
return;
}
u=(x-a[0][0])/(a[1][0]-a[0][0]);
u1=u;

y=a[0][1];
for(i=2;i<=n;i++){
y=y+(u1*(a[0][i]/k));
u1=u1*(u-(i-1));
k=k*i;
}
printf("The result is: %.4f",y);
}
int main(){
NewtonForward();
return 0;
}
