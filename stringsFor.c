#include <stdio.h>
#include <string.h>

int main()

{
    char cars[][10] = {"Andrea", "Angelica", "Abigael", "Andrea", "Apollo"};

    for (int i = 0; i <= 4; i++)

    {
        printf("%s\n", cars[i]);
    }

    return 0;
}