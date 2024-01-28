#include <stdio.h>

int main()
{
    // Write a C program to display the n terms of odd natural numbers and their sum.

    int n, sum=0;
    printf("Input how many terms: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i * 2 + 1 );
        sum+=i;
    }
    printf("\nThe sum: %d", sum);
}