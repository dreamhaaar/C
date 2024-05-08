#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int fun(char[], char[]);

int main()
{
    char str[20], str2[20];

    printf("Result: %d", (fun(str, str2)));

    getch();
}

int fun(char str[], char str2[])
{
    printf("\n***************PALINDROME CHECKER***************\n");
    printf("\nInput the string: ");
    fgets(str, 20, stdin);

    if (isdigit(str[0])) // Check if the first character is a digit
    {
        printf("\nInvalid input. Please input a string and try again.\n");
        return -1; // Return -1 to indicate invalid input
    }

    printf("\n0 - Not Palindrome\n1 - Palindrome\n\n");
    str[strcspn(str, "\n")] = '\0';

    strcpy(str2, str);
    strrev(str2);

    if (strcmpi(str, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
