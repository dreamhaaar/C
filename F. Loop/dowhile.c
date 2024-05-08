#include <stdio.h>

int main()
{
    int n, i, tryAgain, square;

    do
    {
        square = 0;

        printf("Input the number: ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            square += i * i;
            printf("%d^2 = %d\n", i, i * i);
        }

        printf("The sum of the squares: %d\n", square);

        printf("Would you like to try another? Input 1 for YES and 0 for NO: ");
        scanf("%d", &tryAgain);

    } while (tryAgain == 1);

    return 0;
}
