#include <stdio.h>

int main()
{
    int a, b = 25;
    int *pa, *pb = &b;
    *pb = b +  25;
    a = *pb + 10;
    pa = pb;
    *pa = a + b;
    printf("%d %d %d", *pa, *pb, b);

    int x[8] = { 2,4,6,8,10,3,9,12};


    printf("\n(*x + 4): %d\n", (*x + 4));

     
    printf("\n*(x + 6): %d\n", *(x + 6));
    printf("*x: %d", *x);
}