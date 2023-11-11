#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter a first number: ");
    scanf("%d", &num1);

    printf("Enter a second number: ");
    scanf("%d", &num2);

    printf("Enter a third number: ");
    scanf("%d", &num3);

    int max = num1;


    if (num1 >= num2)
    {
        int max = num1;
        printf("%d is the maximum number.", max);
    }

    else if (num1 <= num2)
    {
        int max2 = num2;
        printf("%d is the maximum number.", max2);
    }

    else
    {
        int max3 = num3;
        printf("%d is the maximum number.", max3);
    }
}