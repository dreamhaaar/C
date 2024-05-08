#include <stdio.h>

int main()
{
    /*Write a program that would store 11 numbers in a one dimensional array. Store the sum of the
  two succeeding pairs in another array. Hence, only 10 integers will be stored in the second
  array.
  Sample Run:
  Enter eleven numbers: 1 2 3 4 5 6 7 8 9 10 11
  SUM of TWO succeeding pairs:3 5 7 9 11 13 15 17 19 21*/

    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arr1[11];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        arr1[i] += arr1[i + 1];
        printf("%d ", arr1[i]);
    }
  
}
