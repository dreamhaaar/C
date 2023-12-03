#include <stdio.h>

int findmax(int num1, int num2)
{
    return (num2 < num1) ? num1 : num2;
}

int main()
{
    int num1;
    int num2;

    printf("Enter a first number: ");
    scanf("%d", &num1);

    printf("Enter a second number: ");
    scanf("%d", &num2);

    int max = findmax(num1, num2);
    printf("%d is the maximum number.\n", max);

    return 0;
}
