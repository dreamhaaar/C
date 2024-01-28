#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, count = 0;
    srand(time(0));

    int guess = rand() % 10 + 1;
    printf("Guess number between 1-10.");
    do
    {
        printf("\nGuess: ");
        scanf("%d", &num);

        count++;

        (guess > num) ? printf("\nThe number is higher!!!") : ((guess < num) ? printf("\nThe number is lower!!!") : printf("\nYou got it right!!!"));
    } while (num != guess);
    printf("\nNumber of guess: %d", count);
    return 0;
}