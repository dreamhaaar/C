#include <stdio.h>
#include <malloc.h>

int bubbleSort(int *arr, int n);
int binarySearch(int arr[], int n, int find);

int main()
{
    int *arr;
    int n, find;

    printf("\nInput the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * (sizeof(int)));

    printf("\nInput elements in the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (arr + i));
    }

    printf("\nInput the value to search: ");
    scanf("%d", &find);

    bubbleSort(arr, n);

    int *sorted;

    sorted = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        sorted[i] = arr[i];
    }
    
    printf("\nSorted elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(sorted + i));
    }

    int index = binarySearch(sorted, n, find);


    printf("\n\nThe index of %d is on %d", find, index);
}

int bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp;
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    return *arr;
}

int binarySearch(int arr[], int n, int find)
{

    int l = 0;
    int r = n - 1;
    int m;

    while (l <= r)
    {

        m = l + (r - l) / 2;
        if (arr[m] == find)
        {
            return m;
        }

        else if (find > arr[m])
        {
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return m;
}