#include <stdio.h>
#include <conio.h>

//function prototype
void functAdd(int [], int [], int);

int main()
{
    // variables declaration
    int arrA[10], arrB[10], ans;
    int size = sizeof(arrA) / sizeof(arrA[0]);

    // do while loop so that the block of codes will execute once
    // inside the loop, the function called functAdd was called

    do
    {
        functAdd(arrA, arrB, size);
        printf("\n\nDo you want to execute the program again? 1-YES and 0-NO\n");
        scanf("%d", &ans);
    } while (ans == 1);
    getch();
}

// void return type with parameters of three int
void functAdd(int arrA[], int arrB[], int size)
{
    int i;

    // input for end user
    printf("\nInput 10 elements in Array A:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arrA[i]);
    }

    // process of adding the elements of succeeding elements
    for (i = 0; i < size; i++)
    {
        arrB[i] = arrA[i] + arrA[i + 1];
    }

    //printing the elements in Array A
    printf("\nElements in Array A:\n");
    for (i = 0; i < size; i++)
    {
        printf("%4d ", arrA[i]);
    }

    //printing the elements in Array B
    printf("\n\nElements in Array B:\n");
    for (i = 0; i < size - 1; i++)
    {
        printf("%4d ", arrB[i]);
    }
}