#include <stdio.h>

void sort(int BSIT[], int size)
{
    for (int i = 0; i < size - i; i++)
    {
        for (int j = 0; j - i - 1 < size; j++)
        {
            if (BSIT[j] > BSIT[j + 1])

            {

                int temp = BSIT[j];

                BSIT[j] = BSIT[j + 1];

                BSIT[j + 1] = temp;
            }
        }
    }
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
    int const MAX = 3;
    int i;
    int size = sizeof(BSIT) / sizeof(BSIT[i]);

    for (int i = 1; i <= MAX; i++)
    {
        printf("Input number %d: ", i);
        scanf("%d", &BSIT[i]);
    }
    printf("\nAll even numbers are: ");
    for (i = 1; i <= MAX; i++)
    {

        if (BSIT[i] % 2 == 0)

        {
            printf("%d ", BSIT[i]);
            sum += BSIT[i];
        }
    }

    printf("\nIts arranged order: ");
    if (BSIT[i] > BSIT[i] + 1)
    {

        int temp = BSIT[i];

        BSIT[i] = BSIT[i + 1];

        BSIT[i + 1] = temp;
    }
    printf("%d", BSIT[i]);

    printf("\n");
    printf("\nThe sum of all even numbers is: %d\n", sum);
}
