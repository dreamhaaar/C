#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[256];
    int age;
} classmates;

int main()
{
    classmates a1;

    printf("Input your name: ");
    scanf("%s", a1.name);

    printf("Input your age: ");
    scanf("%d", &a1.age);

    printf("Your name is %s and your age is %d.", a1.name, a1.age);
}