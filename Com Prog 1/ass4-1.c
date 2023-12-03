#include <stdio.h>

int main()
{

    /*
    PROGRAMMING EXERCISE 4-1
    Write a program that will determine whether a person is a child, a teen-ager or an adult
    using age as input. Assume that a child is from 0 to 12 years old, a teen-ager is from 13
    61 to 19 and adult is from 20 years old and above. Return ‘C’ from child, ‘T’ for teen-ager
    and ‘A’ for adult.
    */

    int age = 0;

    printf("Input your age: ");
    scanf("%d", &age);

    if (age <= 12)
    {
        printf("\nC");
    }

    else if (age > 13 || age <= 19)
    {
        printf("\nT");
    }
    else
    {
        printf("\nA");
    }

    return 0;
}