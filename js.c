#include <stdio.h>
void try(int num1, int num2)
{
    scanf("%d %d", &num1, &num2);
    printf("The numbers are %d %d", num1, num2);
}
int main()
{

    int num1, num2;
    try(num1, num2);
}
