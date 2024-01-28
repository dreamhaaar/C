#include <stdio.h>

int main()
{
    int num, checker, sum = 0;
    double half;
    printf("\n\n****************DWARF OR NOT****************");

    do
    {
        printf("\nInput a non-negative integer: ");
        scanf("%d", &num);

        checker = (num > 0.0) ? 1 : 0;

        switch (checker)
        {
        case 0:
            break;

        case 1:
            printf("\nInput number: %d", num);
            printf("\nFactors are: ");

            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("%d ", i);
                    sum += i;
                }
            }
            printf("\nSum of its factors: %d", sum);
            printf("\nHalf of the number: %.2lf", half = num * 0.5);
            (sum > half) ? printf("\n%d is a DWARF", num) : printf("\n%d is NOT A DWARF", num);
            break;
        }

    } while (checker == 0);
}