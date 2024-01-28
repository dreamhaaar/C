#include <stdio.h>

int main()
{

    int arr[20], sum, n;
    printf("How many numbers in the array? ");
    scanf("%d", &n);
    printf("\nInput numbers in array.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nInput the sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("%d %d", i, j);
            }
        }
    }
}