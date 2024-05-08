#include <stdio.h>
#include <ctype.h>

int main() {
    int ch = '^'; // Character to test

    // isalnum(): checks if the character is alphanumeric (letter or digit)
    if (isalnum(ch))
        printf("%c is alphanumeric.\n", ch);
    else
        printf("%c is not alphanumeric.\n", ch);

    // isalpha(): checks if the character is alphabetic (letter)
    if (isalpha(ch))
        printf("%c is alphabetic.\n", ch);
    else
        printf("%c is not alphabetic.\n", ch);

    // isdigit(): checks if the character is a digit
    if (isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is not a digit.\n", ch);

    // islower(): checks if the character is a lowercase letter
    if (islower(ch))
        printf("%c is a lowercase letter.\n", ch);
    else
        printf("%c is not a lowercase letter.\n", ch);

    // ispunct(): checks if the character is a punctuation character
    if (ispunct(ch))
        printf("%c is a punctuation character.\n", ch);
    else
        printf("%c is not a punctuation character.\n", ch);

    // isspace(): checks if the character is a whitespace character
    if (isspace(ch))
        printf("%c is a whitespace character.\n", ch);
    else
        printf("%c is not a whitespace character.\n", ch);

    // tolower(): converts the character to lowercase
    printf("Lowercase of %c is %c.\n", ch, tolower(ch));

    // toupper(): converts the character to uppercase
    printf("Uppercase of %c is %c.\n", ch, toupper(ch));




    return 0;
}

/*
isalnum(): Checks if a character is alphanumeric (alphabetical or numeric).
isalpha(): Checks if a character is alphabetic.
isdigit(): Checks if a character is a digit (0-9).
islower(): Checks if a character is lowercase.
isupper(): Checks if a character is uppercase.
isspace(): Checks if a character is a whitespace character (space, tab, newline, etc.).
ispunct(): Checks if a character is a punctuation character.
tolower(): Converts a character to lowercase.
toupper(): Converts a character to uppercase.
*/