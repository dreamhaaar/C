#include <stdio.h>
#include <string.h>

int main()

{
    // swap the two strings
    char string1[256] = "Andrea Mhar";
    char string2[250] = "Angelica";

  strcpy (string2, string1);

    printf("Andrea Mhar is now : %s\n", string1);
    printf("Angelica is now : %s", string2);

    return 0;
}