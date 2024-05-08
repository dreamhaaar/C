#include <stdio.h>

int dwarf(int n, int sum, double half)
{
    printf("Input number is %d\n", n);
    printf("Factors are: ");
    if (n > 0.0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0 && n != i)
            {
                printf("%d ", i);
                sum += i;
            }
        }
        printf("\nThe sum of its factors is %d\n", sum);
        printf("The half of the number is %.1lf\n", half = n * 0.5);

        if (sum >= half)
        {
            printf("\n%d is DWARF", n);
        }
        else if (sum <= half)
        {
            printf("\n%d is NOT DWARF", n);
        }
    }

    return 0;
}

int main()
{

    /*Write a program that will input non-negative integer and call a function DWARF to
determine if the integer is DWARF or NOT. An integer is said to be DWARF if the sum of
its factors is greater than the half of the number.
*/
    
    int sum = 0;
    double half = 0;
    int n;
    printf("\nInput a non-negative integer: ");
    scanf("%d", &n);
    printf("\n");

    dwarf(n, sum, half);
    printf("\n");
    printf("\n");
}
