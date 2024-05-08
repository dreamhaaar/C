#include <stdio.h>

int main()
{

    int arrA[99][99];
    int arrB[99][99];
    int arrC[99][99];
    int row, col;
    int checker;
    int ans;

    do
    {
        printf("\nInput the size of rows: ");
        scanf("%d", &row);

        printf("Input the size of columns: ");
        scanf("%d", &col);

        checker = (row <= 0 || col <= 0) ? 1 : 0;

        switch (checker)
        {
        case 1:
            printf("\nInput size that is non-negative integer.");
            break;

        case 0:
            printf("\nElements in the array:\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &arrA[i][j]);
                }
            }

            printf("\nElements in the array:\n");
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &arrB[i][j]);
                    arrC[i][j] = arrA[i][j] + arrB[i][j];
                }
            }

            printf("\nSum of the elements in the array: ");
            for (int i = 0; i < row; i++)
            {
                printf("\n");
                for (int j = 0; j < col; j++)
                {
                    printf("%d ", arrC[i][j]);
                }
            }
            break;
        }

        printf("\n\nWould you like do try again? 1-YES and 0-NO\n");
        scanf("%d", &ans);

    } while (ans == 1);
}