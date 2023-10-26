#include <stdio.h>

int main()
{

    /*
PROGRAMMING EXERCISE 1-4
A supermarket sells bags of mixed candies. Four types of candies are offered. Candy a
costs Php. 35.00/kg; Candy B cost Php. 45.00/ kg; candy C cost Php. 56.00/kg and Candy
D cost Php. 57.50 kg. Write a program that will calculate and print the amount of bag of
candies in terms of the weight of each type of candy as provided by the program user.
    */
    printf("\n*******************************\n");
    printf("\tMENU\t\n");
    printf("Candy A: Php. 35.00/kg\nCandy B: Php. 45.00/kg\nCandy C: Php. 56.00/kg\nCandy D: Php. 57.50/kg ");
    printf("\n*******************************\n");

    float a, b, c, d, sum;
    float items[4];
    printf("\nInput the amount of kilograms that you want to purchase.\nCandy A: ");
    scanf("%f", &a);

    printf("Candy B: ");
    scanf("%f", &b);

    printf("Candy C: ");
    scanf("%f", &c);

    printf("Candy D: ");
    scanf("%f", &d);

    items[0] = a * 35.00;
    items[1] = b * 45.00;
    items[2] = c * 56.00;
    items[3] = d * 57.50;
    sum = items[0] + items[1] + items[2] + items[3];

    printf("\nThe list of the amount of candies that you bought are as follows:\n");
    printf("Candy A: %.2fkg\nCandy B: %.2fkg\nCandy C: %.2fkg\nCandy D: %.2fkg\n", a, b, c, d);
    printf("\nThe amount of purchased items are Php %.2f", sum);

    return 0;
}
