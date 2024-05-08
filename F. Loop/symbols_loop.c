#include <stdio.h>

int main()
{
    int n;
    char sign = ' ';
    printf("\nInput the number of rows: ");
    scanf("%d", &n);

    printf("\nInput the symbol to be use: ");
    scanf(" %c", &sign);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < i; j++)
        {
            printf("%c", sign);
        }
    }
}