#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    d = a * b * c;

    printf("The answer is %d", d);
}