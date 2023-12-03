#include <stdio.h>
#include <conio.h>
int main()
{
    char name[256];
    printf("What's your name? ");
    fgets(name, 256, stdin);
    printf("\nYour name is: %s\n", name);
    
}