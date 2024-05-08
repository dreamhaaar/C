#include <stdio.h>
#include <conio.h>
#include <ctype.h>

// function prototype
void ADD(int[], int[], int);

int main()
{
    // variables declaration
    int arrA[10], arrB[10], ans;
    int size = sizeof(arrA) / sizeof(arrA[0]);

    // do while loop so that the block of codes will execute once
    // inside the loop, the function ADD was called

    do
    {
        ADD(arrA, arrB, size);
        printf("\nDo you want to execute the program again? 1-YES and 0-NO\n");
        scanf("%d", &ans);
    } while (ans == 1);
    getch();
}

// void return type with parameters of three int
void ADD(int arrA[], int arrB[], int size)
{
    int i;

    // input for end user
    printf("\nInput 10 elements in Array A:\n");

    for (int i = 0; i < size; i++)
    {
        // condition to check if input is character or a number
        //  if the condition returned 1, it means it successfully read an integer
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arrA[i]) != 1)
        {
            printf("\nInvalid input. Please enter integers only.\n");

            // to clear the input buffer in other words to remove the newline
            while (getchar() != '\n')
                ;

            // to exit the function once the character has been identified
            i--;
        }
    }

    // process of adding the elements of succeeding elements
    for (i = 0; i < size; i++)
    {
        arrB[i] = arrA[i] + arrA[i + 1];
    }

    // printing the elements in Array A
    printf("Array A:\t");
    printf("\tArray B:\n");

    for (i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            printf("%4d\t\t |\t%4d\n", arrA[i], arrB[i]);
        }
        else
            printf("%4d\t\t |\t\n", arrA[i]);
    }
}