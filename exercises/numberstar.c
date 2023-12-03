#include <stdio.h>

int main()
{
    int n, k = 1;

    printf("\nInput the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int m = 1; m <= i; m++){
            printf("* ");
        }
        printf("\n");
    }
}