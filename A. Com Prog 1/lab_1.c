#include <stdio.h>

int function_min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int function_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[100];
    int size;
    printf("Input size of the array: ");
    scanf("%d", &size);

    printf("Elements of the array:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = function_min(arr, size);
    int max = function_max(arr, size);

    printf("The minimum: %d\n", min);
    printf("The maximum: %d\n", max);
}