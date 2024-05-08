#include <stdio.h>

int func_min(int [][99], int, int);
int func_max(int [][99], int, int);

int main()
{
    int  x[99][99], m, n, a;
    printf("\t**********MINIMUM AND MAXIMUM**********\t\n");

    do
    {
        printf("\nInput the size of the rows: ");
        if (scanf("%d", &m) <= 0 || m <= 0)
        {
            printf("Invalid input. Input the size of the rows: ");
            scanf("%d", &m);
        }

        printf("Input the size of the columns: ");
        if (scanf("%d", &n) <= 0 || n <= 0)
        {
            printf("Invalid input. Input the size of the columns: ");
            scanf("%d", &n);
        }

        printf("\nInput integer elements in the array:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &x[i][j]);
            }
        }

        printf("\nElements in the array:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%4d ", x[i][j]);
            }
            printf("\n");
        }
        int min = func_min(x, m, n);
        int max = func_max(x, m, n);
        printf("\nMinimum value in the array: %d\t\tMaximum value in the array: %d", min, max);

        printf("\n\nWould you like to try again? 1-YES and 0-NO: ");
        scanf("%d", &a);
    } while (a == 1);
}

int func_min(int x[][99], int m, int n)
{
    int min = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min > x[i][j])
            {
                min = x[i][j];
            }
        }
    }
    return min;
}

int func_max(int x[][99], int m, int n)
{
    int max = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (max < x[i][j])
            {
                max = x[i][j];
            }
        }
    }
    return max;
}