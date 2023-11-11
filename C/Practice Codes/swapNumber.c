#include <stdio.h>

void swap(int num1, int num2)
{

    int temp = num2;
    printf("First number is now %d.", temp);
    temp = num1;
    printf("\nSecond number is now %d.", temp);
}

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    swap(num1, num2);
}