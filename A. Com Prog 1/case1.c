#include <stdio.h>

int main()
{
    int num, checker;
    printf("\n\n****************PRIME FACTORS****************");

    do{
        printf("\nInput a non-negative integer: ");
        scanf("%d", &num);

        checker = (num > 0.0) ? 1 : 0;

        switch (checker)
        {
        case 0:
            break;

        case 1:
            printf("\nThe prime factors of %d are ", num);
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                {
                    printf("%d ", i);
                }
            }
            break;
        }
    } while (checker == 0);
}