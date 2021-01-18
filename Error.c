#include<stdio.h>
#include<math.h>
int main()
{
    float actualv,measuredv,absolutee,relativee,percentagee;
    printf("enter actual value");
    scanf("%f",&actualv);
    printf("\nenter measured value");
    scanf("%f",&measuredv);
    absolutee=fabs(actualv-measuredv);
    relativee=absolutee/actualv;
    percentagee=relativee*100;
    printf("\nAbsolute Error...%f",absolutee);
    printf("\nRelative Error...%f",relativee);
    printf("\nPercentage Error...%f",percentagee);
}
