#include <stdio.h>
int main()
{

    int n;
    int m = 1;
    int checker;
    printf("************FACTORIAL************\n");

    do
    {
        printf("Input a number: ");
        scanf("%d", &n);

        checker = (n > 0) ? 1 : 0;

        switch (checker)
        {
        case 0:
            printf("\nPlease input non-negative integer.\n\n");
            break;

        case 1:
            for (int i = 1; i <= n; i++)
            {
                m *= i;
            }
            printf("Factorial of %d: %d", n, m);
            break;
        }
    } while (checker == 0);
}