#include <stdio.h>

/*int ave(int a, int b)
{
    return a + b;
}
*/
int main()
{
    /* int a = 5, b = 10;
     int add = ave(a,b);
     printf("%d", add);*/

    for (int i = 0; i < 10; i++)
    {
        printf("1\n");
        for (int j = i + 1; j < 10 - 1; j++)
        {
            printf("0");
        }
    }
    printf("\n\n");
    for (int i = 0; i < 10 - 1; i++)
    {
        printf("1\n");
        for (int j = 0; j < i - 1; j++)
        {
            printf("0");
        }
    }
}