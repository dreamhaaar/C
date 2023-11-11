#include <stdio.h>

int dwarf(int n, double sum, double half)
{

    if (n > 0.0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && n != i)
            {
                sum += i;
            }
        }

        half = n * 0.5;

        if (sum >= half)
        {
            printf("DWARF\n\n");
        }
        else if (sum <= half)
        {
            printf("NOT\n\n");
        }
    }

    return n = 0;
}

int main()
{

    /*Write a program that will input non-negative integer and call a function DWARF to
determine if the integer is DWARF or NOT. An integer is said to be DWARF if the sum of
its factors is greater than the half of the number.
*/

    double sum = 0;
    double half = 0;
    int n;
    printf("\nInput a non-negative integer: ");
    scanf("%d", &n);
    printf("\n");

    dwarf(n, sum, half);
}
