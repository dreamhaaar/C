#include <stdio.h>

int main()
{

    int a;

    printf("Enter an integer number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("EVEN");
    }
    else
        printf("ODD");
}
