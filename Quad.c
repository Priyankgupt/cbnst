#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int arr[10];
    int i, num, power;
    float x, polySum;

    printf("Enter the order of the polynomial \n");
    scanf("%d", &num);
    printf("Enter the value of x \n");
    scanf("%f", &x);

    printf("Enter %d coefficients \n", num + 1);
    for (i = 0; i <= num; i++)
    {
        scanf("%d", &arr[i]);
    }
    polySum = arr[0];
    for (i = 1; i <= num; i++)
    {
        polySum = polySum * x + arr[i];
    }
    power = num;

    printf("Given polynomial is: \n");
    for (i = 0; i <= num; i++)
    {
        if (power < 0)
        {
            break;
        }

        if (arr[i] > 0)
            printf(" + ");
        else if (arr[i] < 0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d  ", abs(arr[i]), power--);
    }
    printf("\n Sum of the polynomial = %6.2f \n", polySum);
}
