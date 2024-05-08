#include <stdio.h>

int main()
{

    int num[] = {5, 3, 2, 4, 1};
    int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (num[j] > num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
        for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
}