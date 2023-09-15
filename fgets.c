#include <stdio.h>
int main()
{
    char name[256];
    printf("What's your name? ");
    fgets(name, 256, stdin);
    printf("Your name is: %s ", name);
}