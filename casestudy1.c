#include <stdio.h>

int main()
{

    /*Write a program that accepts a positive integer and gives its prime factorization, that
    expresses the integer as a product of primes.
    */
    int num1;
     printf("\n");
    printf("Input a positive integer: ");
    scanf("%d", &num1);

    printf("Its prime factors are: " );
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");
}