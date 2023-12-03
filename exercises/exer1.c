#include <stdio.h>

int main()
{

    int num[2], i;

    for (i = 0; i < 2; i++)
    {
        printf("Input number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    if (num[0] == num[1])
    {
        printf("Number1 and Number2 are equal.");
    }
    else
    {
        printf("Number1 and Number2 are not equal.");
    }
}