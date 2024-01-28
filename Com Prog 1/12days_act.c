#include <stdio.h>

void xmas(int size, int m, int arr[], int sum);

int main()
{
    int arr[12], m = 0, sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    xmas(size, m, arr, sum);

}

void xmas(int size, int m, int arr[], int sum)
{
    printf("\n\n***********TWELVE DAYS OF CHRISTMAS***********\n\n");
    for (int i = 1; i <= size; i++)
    {
        m += i;
        arr[i - 1] = m;
        sum += arr[i - 1];

        printf("Day %d: %d\n", i, arr[i - 1]);
    }
    printf("\nTotal gifts received: %d\n\n", sum);
}
