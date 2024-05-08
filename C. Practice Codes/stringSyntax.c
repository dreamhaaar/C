#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Andrea";
    char string2[] = "Mhar";
   //  strlwr(string1);
    // strupr(string2);

    // strlwr(string1); // converts a string to lowercase

    // strupr(string1);                           // converts a string to uppercase

    // strcat(string1, string2); // appends string2 to end of string1  // AndreaMhar Mhar

    // strncat(string1, string2, 10);       // appends n characters from string2 to string1

    // strcpy(string1, string2);           // copy string2 to string1

    // strncpy(string1, string2, 8);      // copy n characters of string2 to string1

     strset(string1, '?');        //sets all characters of a string to a given character

   // strnset(string1, '*', 8);  //sets first n characters of a string to a given character

    // strrev(string1);             //reverses a string

    // int result = strlen(string1);                          // returns string length as int

   // int result = strcmp(string1, string2); // string compare all characters

    // int result = strncmp(string1, string2, 1);   // string compare n characters

   //int result = strcmpi(string1, string2);        // string compare all (ignore case)

    // int result = strnicmp(string1, string1, 1);  // string compare n characters (ignore case)

   // int result = strspn(string1, string2);
   //strdup(string1);
   printf("%s %s", string1, string2);
    //  printf(" %s",  string1);
    // printf(" %s",  string2);

  // printf("%d", result);
}