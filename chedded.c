#include <stdio.h>

int main()
{

    int n;
    printf("\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
        printf("ODD\n");
    printf("\n");
}