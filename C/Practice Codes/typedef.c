#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[24];
    int age;
} classmates;

int main()
{

    classmates member1;

    strcpy(member1.name, "Andrea");
    member1.age = 18;

    classmates member2 = {"Angelica", 22};

    printf("Name: %s\tAge: %d\n", member1.name, member1.age);
    printf("Name: %s\tAge: %d\n", member2.name, member2.age);
}
