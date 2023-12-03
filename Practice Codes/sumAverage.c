#include <stdio.h>

int main()
{

    // Program to calculate the sum and average of positive numbers
    // If the user enters a negative number, the sum and average are displayed.

    int i, number, sum;
    double average;
    printf("Input a positive number.\n");

    for ( i = 1; i < number; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &number);

        if (number < 0.0)
        {
            break;
        }
        sum += number;
  
    }
      average = sum / (i - 1);
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf", average);
}
