#include <stdio.h>

int main()
{
    /*Write a program that will ask the user to input the size of array_SQUARE.
    Compute and print the square of each array compartment.*/

    int arr[100], n, i, j, k, count = 0;

    printf("\nInput the size of the array: ");
    scanf("%d", &n);

    printf("\nInput the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in the array: ");
    for (j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
        arr[j] *= arr[j];
    }
    
    printf("\nThe squares are: ");
    for (k = 0; k < i; k++)
    {
        printf("%d ", arr[k]);

}
}