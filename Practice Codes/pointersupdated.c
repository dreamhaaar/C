#include <stdio.h>

int main()
{

    int *pnum, num1, num2, age;

    num1 = 21;
    num2 = 30;
    age = 18;
    pnum = &age;


    pnum = &num1;
    printf("\nThe value of num1 is %d\n", *pnum);
    printf("The address of num1 is %p\n\n", &pnum);

    return 0;
}
