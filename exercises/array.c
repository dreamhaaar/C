#include <stdio.h>

int main()
{

    // check if a number is a multiple of 3

    int number, i, check = 0, multiple[30];

    printf("Input a number: ");
    scanf("%d", &number);

    for (i = 0; i < 30; i++)
    {
        multiple[i] = (i + 1) * 3;
    }

    for (i = 0; i < 30; i++)
    {
        if (number == multiple[i])
        {
            check = 1;
            break;
        }
    }

    if (check == 1)
    {
        printf("%d is a multiple of 3", number);
    }
    else
        printf("%d is not a multiple of 3", number);
}