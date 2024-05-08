#include <stdio.h>

void modify(int *x, int *y)
{
    *x = *x + *y; // Update the value of x with the sum of x and y
    *y = *x + *y; // Update the value of y with the sum of the updated x and original y
}

int main()
{
    int x = 5;
    int y = 10;

    printf("Before function call: x = %d, y = %d\n", x, y);

    modify(&x, &y);

    printf("After function call: x = %d, y = %d\n", x, y);

    x = 35;
    y = 45;
    printf("After function call: x = %d, y = %d\n", x, y);

    modify(&x, &y);

    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}

// shares same memory location, hence the changes will be reflected
