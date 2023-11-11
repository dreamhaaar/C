#include <stdio.h>

int main()
{
    typedef struct
    {
        char name[256];
        int age;
    } characs;

    characs a1 = {"Mikasa", 18};
    characs a2 = {"Eren", 18};
    characs a3 = {"Armin", 18};

    characs arrays[] = {a1, a2, a3};

    printf("Name\tAge\n");
    for (int i = 0; i < sizeof(arrays)/sizeof(arrays[0]); i++)
    {
        printf("%s\t%d\n", arrays[i].name, arrays[i].age);
    }
    return 0;
}
