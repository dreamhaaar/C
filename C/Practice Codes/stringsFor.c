#include <stdio.h>
#include <string.h>

int main()

{
    char cars[10][10] = {"Andrea", "Angelica", "Abigael", "Angilei", "Apollo", "De Leon"};

    for (int i = 0; i <= 4; i++)

    {
        printf("%s ", cars[i]);
    }

    return 0;
}