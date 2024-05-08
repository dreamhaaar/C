#include <stdio.h>

void sort(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (numbers[j] > numbers[j - 1 ])
            {
                int holder1 = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j - 1] = holder1;
                break;
            }
        }
}

void print(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
}

int main()

{

    // Write a program that would input 3 integers and would output them in descending order.
    int numbers[3];
    printf("\nEnter the first number: ");
    scanf("%d", &numbers[0]);

    printf("\nEnter the second number: ");
    scanf("%d", &numbers[1]);

    printf("\nEnter the third number: ");
    scanf("%d", &numbers[2]);

    int size = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, size);
    printf("\n");
    print(numbers, size);
    printf("\n");
}
