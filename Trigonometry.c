#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main ()
{
       double x = 0,ret;
       printf("The exponential value of %lf is %lf\n", x, exp(x));
       printf("The exponential value of %lf is %lf\n", x+1, exp(x+1));
       printf("The exponential value of %lf is %lf\n", x+2, exp(x+2));
       printf("\n");

      // log10(x)
       x = 10000;
       /* finding value of log1010000 */
       ret  = log10(x);
       printf("log10(%lf) = %lf\n", x, ret);
        printf("\n");

        //log2(x)
        x = 2.7;
        /* finding log2(2.7) */
        ret = log2(x);
        printf("log2(%lf) = %lf", x, ret);
         printf("\n");

        //logx
        printf("\n");
        x = 2.7;
        /* finding log(2.7) */
        ret = log(x);
        printf("log(%lf) = %lf", x, ret);
         printf("\n");


       // sin
        printf("\n");
        double result;
        x = 2.3;
        result = sin(x);
        printf("sin(%.2lf) = %.2lf\n", x, result);


        x = -2.3;
        result = sin(x);
        printf("sin(%.2lf) = %.2lf\n", x, result);


        x = 0;
        result = sin(x);
        printf("sin(%.2lf) = %.2lf\n", x, result);
         printf("\n");

         //cos
        double arg = 30;

        // Converting to radian
        arg = (arg * PI) / 180;
        result = cos(arg);

        printf("cos of %.2lf radian = %.2lf", arg, result);
        printf("\n");


        //tan
        printf("\n");
        x = 2.3;
        result = tan(x);
        printf("tan(%.2lf) = %.2lf\n", x, result);


        x = -2.3;
        result = tan(x);
        printf("tan(%.2lf) = %.2lf\n", x, result);


        x = 0;
        result = tan(x);
        printf("tan(%.2lf) = %.2lf\n", x, result);
         printf("\n");

    //cot


    printf("\n");
    x = 2.3;
    result = tan(x);
    printf("cot(%.2lf) = %.2lf\n", x, 1/result);

    x = -2.3;
    result = tan(x);
    printf("cot(%.2lf) = %.2lf\n", x, 1/result);

    x = 0;
    result = tan(x);
    printf("cot(%.2lf) = %.2lf\n", x, 1/result);
    printf("\n");



    //cosec
    x = 2.3;
    result = sin(x);
    printf("cosec(%.2lf) = %.2lf\n", x, 1/result);

    x = -2.3;
    result = sin(x);
    printf("cosec(%.2lf) = %.2lf\n", x, 1/result);

    x = 0;
    result = sin(x);
    printf("cosec(%.2lf) = %.2lf\n", x, 1/result);
    printf("\n");

    //sec
     printf("\n");

    // Converting to radian
    arg = (arg * PI) / 180;
    result = cos(arg);

    printf("sec of %.2lf radian = %.2lf", arg, 1/result);

     printf("\n");

}
