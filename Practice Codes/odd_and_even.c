#include <stdio.h>

int main()
{

    printf("\nThe odd numbers from 1-20 are: ");
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\nThe even numbers from 1-20 are: ");
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    
}