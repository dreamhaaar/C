#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", i);
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n\n");
}