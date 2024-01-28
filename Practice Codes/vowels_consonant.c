#include <stdio.h>
#include <ctype.h>

int main()
{

    char vowels[5] = {'A', 'E', 'I', 'O', 'U'};
    char letter;
    int checker = 0;

    printf("Input a letter: ");
    scanf("%c", &letter);
    letter = toupper(letter);

    for (int i = 0; i < 5; i++)
    {
        if (letter == vowels[i])
        {
            checker += 1;
        }
    }

    if (checker == 1)
    {
        printf("%c is a vowel.", letter);
    }
    else
    {
        printf("%c is a consonant.", letter);
    }
}