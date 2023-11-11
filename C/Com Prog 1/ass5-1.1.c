#include <stdio.h>

int main()
{

    /*PROGRAMMING. Write a program for the following problem.
    PROGRAMMING EXERCISE 5-1
    Write a program that will input 20 values to array BSIT. Call the function EVEN to sum up the
    content of all even index. Print array BSIT and the sum of all even index.
    */

    int BSIT[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0;
    int max = 19;

    printf("\nThe even numbers are: ");
    for (int i = 1; i <= max; i++)
    {
        if (BSIT[i] % 2 == 0)
        {
            for (int i = 1; i <= max; i++)
            {
                for (int j = i + 1; j <= max; j++)
                {
                    if (BSIT[i] < BSIT[j])
                    {
                        int even = BSIT[i];
                        BSIT[i] = BSIT[j];
                        BSIT[j] = even;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= max; i++)
    {
        if (BSIT[i] % 2 == 0)
        {
            printf("%d ", BSIT[i]);
            sum += BSIT[i];
        }
    }
    printf("\n\nThe sum of all even numbers are: %d\n\n", sum);
}