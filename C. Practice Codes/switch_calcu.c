#include <stdio.h>
#include <conio.h>

int main()
{

    char sign;
    double num1, num2, answer;

    printf("Hi. What operation do you want to use?");
    printf("\nPlease choose between (+), (-), (*), and (/) ");
    scanf("%c", &sign);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (sign)
    {
    case '+':
        answer = num1 + num2;
        printf("The answer is %.2lf", answer);
        break;

    case '-':
        answer = num1 - num2;
        printf("The answer is %.2lf", answer);
        break;

    case '*':
        answer = num1 * num2;
        printf("The answer is %.2lf", answer);
        break;

    case '/':
        answer = num1 / num2;
        printf("The answer is %.2lf", answer);
        break;

    default:
        printf("%c is not a valid operator", sign);
    }
    getch();
}