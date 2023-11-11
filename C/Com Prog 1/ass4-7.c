#include <stdio.h>

int main()
{
    /*
    Write a program that will input non-negative integer and would display the prime factors
    of the given integer.
    */
    printf("\n");
    int num;

    printf("Input a non-negative integer: ");
    scanf("%d", &num);
    printf("The prime factors are: ");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0 && i != num)
            printf("%d ", i);
    }
    printf("\n");
}
