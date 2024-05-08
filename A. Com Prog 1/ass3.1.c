#include <stdio.h>
#include <conio.h>

int main()
{
    // initialization
    double a, b, c, sum, difference, product, squares_sum, quotient;

    // input
    printf("\nEnter non-negative value of three (3) numbers:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // check if the input numbers are positive numbers

    if (a >= 0.0 && b >= 0.0 && c >= 0.0)
    {
        // process
        sum = a + b + c;
        difference = a - b - c;
        product = a * b * c;
        quotient = a / b / c;
        squares_sum = (a * a) + (b * b) + (c * c);

        // output
        printf("\nThe sum is %.2lf\n", sum);
        printf("The difference is %.2lf\n", difference);
        printf("The product is %.2lf\n", product);
        if (a != 0 && b != 0 && c != 0){
            printf("The qoutient is %.2lf\n", quotient);
        } else printf("Undefined. Cannot divide by zero.\n");
        printf("The sum of their squares is %.2lf\n\n", squares_sum);
    }

    // if the end user input negative number/s
    else
        printf("\nPlease enter non-negative values of three (3) numbers.\n");


    return 0;
}
