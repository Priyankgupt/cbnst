// Priyank Gupta B.tech CSE SE 2015092
#include<stdio.h>
int main(){
int i,j,k,n;
printf("Enter the order of matrix: ");
scanf("%d",&n);
float a[n][n+1],x[n],ratio;
printf("Enter elements of Augmented Matrix:\n");
for(i=1;i<=n;i++){
for(j=1;j<=n+1;j++){
scanf("%f", &a[i][j]);
}
}
for(i=1;i<=n;i++){
if(a[i][i]==0){
printf("Mathematical Error!");
exit(0);
}
for(j=1;j<=n;j++){
if(i!=j){
ratio = a[j][i]/a[i][i];
for(k=1;k<=n+1;k++){
a[j][k] = a[j][k] - ratio*a[i][k];
}
}
}
}
printf("\nSolution:\n");
for(i=1;i<=n;i++){
x[i] = a[i][n+1]/a[i][i];
printf("x[%d] = %f\n",i, x[i]);
}
return 0;
}
