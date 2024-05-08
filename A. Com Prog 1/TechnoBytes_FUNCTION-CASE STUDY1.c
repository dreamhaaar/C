#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int kompute(int *);

int main()
{
    printf("\n*****CASE STUDY 1: DEFICIENT, PERFECT, ABUNDANT*****\n\n");
    int n;
    int *pN = &n;
    kompute(pN);
    getch();
}

int kompute(int *pN)
{
    int n;

    printf("Input an integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("\nInvalid input. Please input an integer and try again.\n");
        getch();
        exit(1);
    }

    *pN = n;

    int sum = 0;
    printf("Proper divisors: ");
    for (int i = 1; i < *pN; i++)
    {
        if (*pN % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of proper divisors: %d\n", sum);

    (sum < *pN) ? printf("%d < %d is DEFICIENT", sum, *pN) : ((*pN == sum) ? printf("%d = %d is PERFECT", sum, *pN) : printf("%d > %d is ABUNDANT", sum, *pN));
    return 0;
}
