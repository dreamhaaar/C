#include <stdio.h>

enum days{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday,Saturday};

int main()

{
    int number;
    printf("Enter a number from 1-7. ");
    scanf("%d", &number);

    (number == 1 || number == 7) ? printf("Happy Weekend!") : printf("Get up. You need to work");
    return 0;
}