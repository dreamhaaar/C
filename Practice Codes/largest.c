#include <stdio.h>

int main()
{
    int a, b;

    printf("\n");
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    if (a > 0.0 && b > 0.0)
    {

        if (a > b && a > 0.0)
        {
            printf("\n%d is the largest number.", a);
        }
        else if (a < b && b < 0.0)
        {
            printf("\n%d is the largest number.", b);
        }
        else if (a == b)
        {
            printf("\nThe two numbers are equal.");
        }
        else if (b > 0.0 && b > a)
        {
            printf("\n%d is the largest number.", b);
        }
    }
    else printf("\nEnter two positive numbers.");
    

}
