#include <stdio.h>

int main()
{
    int num, checker, m = 1;
    printf("\n\n****************FACTORIAL****************");

    do{
        printf("\nInput a non-negative integer: ");
        scanf("%d", &num);

        checker = (num > 0.0) ? 1 : 0;

        switch (checker)
        {
        case 0:
            break;

        case 1:
            for (int i = 1; i <= num; i++)
            {
                m *= i;
            }
            printf("\nThe factorial of %d is %d", num, m);
            break;
        }
    } while (checker == 0);
}