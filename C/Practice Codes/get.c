#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];
    int letter = 0, count = 0, number = 0;

    fgets(string, 50, stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] != '\n' && string[i] != ' ')
        {
            count++;

            if (string[i] == 'a' || string[i] == 'A')
            {
                letter++;
            }
        }
    }
 

    int total = letter;

    if (total > count / 2)
    {
        number = total;
    }
    else
    {
        number = 2 * (total - 1);
    }

    printf("%d", number);

    return 0;
}