#include <stdio.h>



int main()
{
    char pang[] = "Andrea";
    int age = 18;
    greetings(pang, age);
}

void greetings(char pang[], int age)
{
    printf("Hi, %s.", pang);
    printf("\nYou are %d yrs old.", age);
}