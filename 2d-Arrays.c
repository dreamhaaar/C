#include <stdio.h>

int main()

{
    int numbers[3][4];
    numbers[0][0] = 1;

    numbers[0][1] = 2;

    numbers[0][2] = 3;

    numbers[0][3] = 4;

    numbers[1][0] = 5;

    numbers[1][1] = 6;

    numbers[1][2] = 7;

    numbers[1][3] = 8;

    numbers[2][0] = 9;

    numbers[2][1] = 10;

    numbers[2][2] = 11;

    numbers[2][3] = 12;

    int rows = sizeof(numbers) / sizeof(numbers[0]);

    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

        for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}