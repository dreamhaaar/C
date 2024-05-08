#include <stdio.h>

int main()
{

    /*Program to count the number of positive and negative numbers*/

    int numbers[100], size;
    int checker_pos = 0;
    int checker_neg = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Index %d: ", i);
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0)
        {
            checker_pos++;
        }
        else if (numbers[i] < 0)
        {
            checker_neg++;
        }
 
    }

    printf("The elements of the array are: ");
    for (int j = 0; j < size; j++)
    {
        printf("%d ", numbers[j]);
    }

    printf("\nPositive numbers in the array: %d", checker_pos);
    printf("\nNegative numbers in the array: %d", checker_neg);
}