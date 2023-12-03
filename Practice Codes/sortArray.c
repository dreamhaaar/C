#include <stdio.h>


    void printArray(int numbers[], int size)

    {

        for (int i = 0; i < size; i++)

        {

            printf("%d ", numbers[i]);
        }
    }
    int main()

    {

        int numbers[] = {4, 7, 1, 2, 8, 6, 5};
        char letters[] = {'Z', 'A', 'D', 'G', 'Q'};
        int size = sizeof(numbers) / sizeof(numbers[0]);

        sort(numbers, size);
        printArray(numbers, size);
    }