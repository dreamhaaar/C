#include <stdio.h>
#include <string.h>

int main()
{
    // swap two items

    char string1[250];
    printf("Enter a letter or words: ");
    scanf("%s", &string1);

    char string2[256];
    printf("Enter a letter or words: ");
    scanf("%s", &string2);

    printf("%s is now ", string1);
    printf("%s", string2);

    strcpy(string1, string2); 


    
}