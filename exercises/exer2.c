#include <stdio.h>

int main()
{

    int date;
    int LEAP = 2000;
    int new[15], i;

    printf("Input the current year: ");
    scanf("%d", &date);

    for (i = 0; i < 15; i++)
    {
        new[i] = (LEAP + (i * 4));
    }

    int check;
    for (i = 0; i < 15; i++)
    {
        if (date == new[i])
        {
            check = 1;
        }
    }

    if (check == 1)
    {
        printf("%d is a leap year.", date);
    }
    else
        printf("%d is not a leap year.", date);
}
