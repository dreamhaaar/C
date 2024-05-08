#include <stdio.h>
#include <conio.h>

int main()
{
    // int num[5] = {1, 2, 3};
    // printf("%d", num[4]);

    // char letter[3][200] = {"Andrea", "Mhar"};
    // printf("%s", letter[0]);

    /*int matrix[][10] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matrix[i][j] != 0)
            {
                printf("%5d", matrix[i][j]);
            }
        }
        printf("\n");
    }
    int size = sizeof(matrix)/sizeof(matrix[0]);
    printf("%d", size);
 */
    // char college[] = "CCMIT";
    // printf("%s", college);
    // int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    // int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the size
    // printf("Size of the array: %d\n", size);

    // char college[][100] = {"CCMIT", "CCIS", "CAF"};
    // printf("%s", college[2]);

    // int num[20];
    int n;
    int num[20];

    printf("How many letters you want to sort? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    // int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                char temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
}