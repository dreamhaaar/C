#include <stdio.h>

int main()
{

    int date, checker;
    printf("***************LEAP YEAR CHECKER***************");
    printf("\nInput the date: ");
    scanf("%d", &date);

    checker = (date % 100 != 0) ? ((date % 4 == 0) ? 1 : 0) : ((date  % 100 == 0)? ((date % 400 == 0)? 1 : 0): 0);

    if (checker == 1)
    {
        printf("%d is a leap year.", date);
    }
    else
        printf("%d is not a leap year.", date);
}