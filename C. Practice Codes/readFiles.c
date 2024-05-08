#include <stdio.h>

int main()
{
    FILE *ptf = fopen("hello.txt", "a");
    char text[256];

    if (ptf == NULL)
    {
        printf("The file cannot be opened");
    }
    else
    {
        while (fgets(text, 256, ptf))
            printf("%s\n", text);
    }

    fclose(ptf);

    return 0;
}