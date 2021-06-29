// Priyank Gupta B.tech CSE SE 2015092
#include<stdio.h>
int main(){
int n,i,j,k;
float ratio,sum=0;
printf("Enter the order of matrix: ");
scanf("%d",&n);
float mat[n][n+1],x[n];
printf("\nEnter the elements of augmented matrix:\n\n");
for(i=1;i<=n;i++){
for(j=1;j<=n+1;j++){
scanf("%f",&mat[i][j]);
}
}
for(i=1;i<=n-1;i++){
if(mat[i][i]==0){
printf("Mathematical Error!");
exit(0);
}
for(j=i+1;j<=n+1;j++){
ratio=mat[j][i]/mat[i][i];
for(k=1;k<=n+1;k++){
mat[j][k]=mat[j][k]-ratio*mat[i][k];
}
}
}
x[n]=mat[n][n+1]/mat[n][n];
for(i=n-1;i>=1;i--){
x[i]=mat[i][n+1];
for(j=i+1;j<=n;j++){
x[i]=x[i]-mat[i][j]*x[j];
}
x[i]=x[i]/mat[i][i];
}
printf("\nThe solution is: \n");
for(i=1;i<=n;i++){
printf("\nx%d=%f\t",i,x[i]);
}
return 0;
}
