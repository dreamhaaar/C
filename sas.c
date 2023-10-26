#include <stdio.h>

int main()
{

    int i, n;
    int m = 1;

    printf("\nInput a positive number: ");
    scanf("%d", &n);

    if (n > 0.0)
    {
        for (i = 1; i <= n; i++)
        {
            m *= i;
        }
        printf("The factorial of %d is %d\n\n", n, m);
    }

    else if (n < 0.0)
    {
        do
        {
            printf("Enter a positive number.");
            printf("\n\nInput a positive number: ");
            scanf("%d", &n);

            if (n > 0.0)
            {
                for (i = 1; i <= n; i++)
                {
                    m *= i;
                }
                printf("The factorial of %d is %d\n\n", n, m);
            }
        } while (n < 0.0);
    }
}