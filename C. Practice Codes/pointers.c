#include <stdio.h>

void try(int age)
{
    printf("You are %d years old", age);
}

int main()
{
    /*
    int num1 = 20;
    int *pNum = &num1;

    printf("%d\n", num1);
    printf("%p\n", pNum);
    printf("%p\n", &num1);
    printf("%d\n", *pNum);

    int *pnum1, num1, num2;
    num1 = 21;
    num2 = 30;

    pnum1 = &num1; printf("%p\n", &pnum1);
    pnum1 = &num2; printf("%p",&pnum1);
*/

    int *pnum, num1, num2, age;

    num1 = 21;
    num2 = 30;
    age = 18;
    pnum = &age;

    try(num1);
    printf("\n");

    pnum = &num1;
    printf("\nThe value of num1 is %d\n", *pnum);
    printf("The address of num1 is %p\n\n", &pnum);

    pnum = &num2;
    printf("The value of num2 is %d\n", *pnum);
    printf("The address of num2 is %p\n\n", &pnum);

    num2 = 51;
    pnum = &num2;
    printf("The value of num2 is %d\n", *pnum );
    printf("The address of num2 is %x\n\n", &pnum + 2);

    return 0;
}
