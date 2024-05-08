#include <stdio.h>
int main()
{

    // sample elements of array
    int ArrA[3] = {1, 2, 3};
    int ArrB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ArrC[3];

    printf("\nElements in Array A:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", ArrA[i]);
    }

    printf("\nElements in Array B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ArrB[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of Array A and Array B: \n");
    for (int i = 0; i < 3; i++)
    {
        ArrC[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            ArrC[i] += ArrA[j] * ArrB[i][j];
        }
        printf("%d\n", ArrC[i]);
    }
}