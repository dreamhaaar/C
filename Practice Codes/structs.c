#include <stdio.h>

struct classmates
{
    char name[24];
    int age;
};

int main()
{

    struct classmates member1;

    strcpy(member1.name, "Andrea");
    member1.age = 18;

    struct classmates member2 = {"Angelica", 22};

    printf("Name: %s\tAge: %d\n", member1.name, member1.age);
    printf("Name: %s\tAge: %d\n", member2.name, member2.age);


}