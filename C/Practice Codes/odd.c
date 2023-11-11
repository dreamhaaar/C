#include <stdio.h>

int main()
{

    int a;

    printf("\nEnter a positive number: ");
    scanf("%d", &a);

    if (a > 0.0)
    {
        if (a % 2 == 0)
            printf("\nEVEN\n");

        else if (a % 2 == 1)
            printf("\nODD\n");
    }

    else if (a < 0.0)
    {
        printf("\nPlease enter a positive number.\n");

        printf("\nEnter a positive number: ");
        scanf("%d", &a);
        if (a > 0.0)
        {
            if (a % 2 == 0)
                printf("\nEVEN\n");

            else if (a % 2 == 1)
                printf("\nODD\n");
        }
    }
}