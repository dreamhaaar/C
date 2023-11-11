#include <stdio.h>

int main()
{
    int num1[20], n;

    printf("\nHow many numbers do you want to input? ");
    scanf("%d", &n);

    printf("\nEnter the numbers:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num1[i]);
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (num1[i] > num1[j])
            {

                int g = num1[i];
                num1[i] = num1[j];
                num1[j] = g;
            }
        }
    }
    printf("\nThe arranged numbers are: ");
    for (int i = 1; i <=n; i++)
    {
        printf("%d ", num1[i]);
    }
}
