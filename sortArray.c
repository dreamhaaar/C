#include <stdio.h>

void sort(int numbers[], int size)
{
    for (int i = 0; i < size - i; i++)
    {
        for (int j = 0; j < size - i ; j++)
        {
            if (numbers[j] > numbers[j + 1])

            {

                int temp = numbers[j];

                numbers[j] = numbers[j + 1];

                numbers[j + 1] = temp;
            }
        }
    }
}
    void printArray(int numbers[], int size)

    {

        for (int i = 0; i < size; i++)

        {

            printf("%d ", numbers[i]);
        }
    }
    int main()

    {

        int numbers[] = {3, 9, 4, 7, 1, 2, 8, 6, 5};
        char letters[] = {'Z', 'A', 'D', 'G', 'Q'};
        int size = sizeof(numbers) / sizeof(numbers[0]);

        sort(numbers, size);
        printArray(numbers, size);
    }