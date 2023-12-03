#include <stdio.h>

int main()
{

    /*
    Write a program that will determine and print whether a person is a child, a teenager or an adult using age as input.
    Assume that a child is from  0 – 12 years old; a teenager is from 13 – 19 years old and adult is from 20 and above.
    Repeat the process as often as you desired.
    */

    int age;

    printf("Input your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12)
    {
        printf("You are still a child!");
    }

    else if (age >= 13 && age <= 19)
    {
        printf("You are a teenager!");
    }

    else if (age >= 20)
    {
        printf("You are an adult!");
    }
    
}