#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("Input your name: ");
    fgets(name, 30, stdin);

    for (int i = 0; i < 21; i++)
    {
        printf("Hi.");
        for (int j = 0; j < 1; j++)
        {
            printf("%s \n", name);
        }
    }

}