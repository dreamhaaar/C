#include <stdio.h>

int main()
{
    /*char symbol;
    int rows;
    int columns;

    printf("Input the symbol to use: ");
    scanf("%c", &symbol);

    printf("Input how many rows: ");
    scanf("%d", &rows);

    printf("Input how many columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    */

    /*for (int i = 1; i <=100; i++){
     for (int j = 1; j <=20; j++){
         printf("1\a");
     }
    }
    */
#include <stdio.h>
#include <conio.h> // For getche() and getch() functions (specific to some compilers like Turbo C/C++)

    char ch;

    printf("Enter a character using getche(): ");
    ch = getche(); // Reads a single character and echoes it

    printf("\nYou entered: %c\n", ch);

    printf("Enter a character using getch(): ");
    ch = getch(); // Reads a single character without echoing it

    printf("\nYou entered: %c\n", ch);

    return 0;
}
