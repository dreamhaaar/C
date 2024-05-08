#include <stdio.h>

/*N factorial can be defined as the product of all integers from 1 to N and it is denoted by
    the symbol N!. 0! (zero factorial) is defined as 1. Write a program that will input N and
    would display N factorial. (Determine first if N is a nonnegative integer).
*/

int main()
{

    int n, m;
    m = 1;
    printf("\nInput an integer number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }
    printf("\n%d! is equal to %d\n\n",n, m);
}
