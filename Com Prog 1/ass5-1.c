#include <stdio.h>

void EVEN(int sum, int MAX, int BSIT[], int even)
{

    for (int i = 1; i <= MAX; i++)
    {
        printf("Input number %d: ", i);
        scanf("%d", &BSIT[i]);
    }

    printf("\nThe even numbers are: ");
    for (int i = 1; i <= MAX; i++)
    {
        if (BSIT[i] % 2 == 0)
        {
            for (int i = 1; i <= MAX; i++)
            {
                for (int j = i + 1; j <= MAX; j++)
                {
                    if (BSIT[i] > BSIT[j])
                    {
                        even = BSIT[i];
                        BSIT[i] = BSIT[j];
                        BSIT[j] = even;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= MAX; i++)
    {
        if (BSIT[i] % 2 == 0)
        {
            printf("%d ", BSIT[i]);
            sum += BSIT[i];
        }
    }
    printf("\nThe sum of all even numbers is: %d\n", sum);
}

int main()
{
    /*PROGRAMMING. Write a program for the following problem.
PROGRAMMING EXERCISE 5-1
Write a program that will input 20 values to array BSIT. Call the function EVEN to sum up the
content of all even index. Print array BSIT and the sum of all even index.
*/
    int BSIT[20];
    int sum = 0;
    int const MAX = 20;
    int even = 0;

    printf("\n");
    EVEN(sum, MAX, BSIT, even);
    printf("\n");

    return 0;
}
