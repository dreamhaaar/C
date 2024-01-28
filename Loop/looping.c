#include <stdio.h>

void dowhile()
{
    int i = 0;
    do
    {
        i++;
        printf("%3d", i);
    } while (i != 10);

    int j = 10;
    do
    {
        j--;
        printf("%3d", j);
    } while (j != 1);
}

void forloop()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%3d", i);
    }
    for (int j = 9; j >= 1; j--)
    {
        printf("%3d", j);
    }
}

void whale()
{
    int i = 0;
    while (i != 10)
    {
        i++;
        printf("%3d", i);
    }

    int j = 10;
    while (j != 1)
    {
        j--;
        printf("%3d", j);
    }
}

int main()
{
    dowhile();
    printf("\n");
    forloop();
    printf("\n");
    whale();
}