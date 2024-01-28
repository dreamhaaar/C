#include <stdio.h>

int kompute(int *);

int main()
{
    int n;
    int *pN = &n;
    kompute(pN);
}

int kompute(int *pN)
{
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

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