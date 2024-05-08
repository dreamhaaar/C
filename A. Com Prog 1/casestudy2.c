#include <stdio.h>

int main()
{
    /*N factorial can be defined as the product of all integers from 1 to N and it is denoted by
    the symbol N!. 0! (zero factorial) is defined as 1. Write a program that will input N and
    would display N factorial. (Determine first if N is a nonnegative integer).
    */
    int n;
    char a;
    int m = 1;

    printf("\nInput a number: ");

    if (scanf("%d%c", &n, &a) != 2 || a != '\n')
    {
        printf("Input a number.");
    }
    else if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            m *= i;
        }
        printf("The factorial of %d is %d\n\n", n, m);
    }

    else if (n < 0.0)
    {
        printf("Please input a positive number.\n\n");
    }
}
