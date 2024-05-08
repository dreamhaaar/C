#include <stdio.h>

int main()
{
    int n, m, numbers[100], sum = 0;

    do
    {
        printf("\nInput the number of terms: ");
        scanf("%d", &n);

        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            printf("\nInput number %d: ", i);
            scanf("%d", &numbers[i]);
            sum += numbers[i];
        }
        printf("\nThe sum of the numbers is: %d\n", sum);

        printf("\nWould you like another run? Type 1 for YES and Type 2 for NO.\nYour answer: ");
        scanf("%d", &m);

        (m != 1 && m != 2) ? printf("\nInvalid. Please input either 1 or 2.\n") : ((m == 1) ? printf("\nTask will execute again...\n") : (m == 2) ? printf("\nTask will exit...\n")
                                                                                                                                                  : 0);
    } while (m == 1);
}