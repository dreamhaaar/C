#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    /*
PROGRAMMING EXERCISE 4-2
Pizza parlors offers different pizza sizes in terms of diameters. For example, Domino’s
has three options: 10 inches, 12 inches, 14 inches diameter. Extravaganza pizza costing
178 pesos, 259 pesos and 314 pesos respectively. Write a program that will input the
diameter of the pizza, and its price. Determine the (a) area of the pizza and (b) the price
by the divided area. Find out which of the three options above (for Domino’s) is the least
expensive in terms of price per square inch of pizza. Note that the area of a circle is
equivalent to PI* (diameter / 2)2.
*/

    printf("\n********************************\n");
    printf("\tWELCOME TO DOMINOS\t\n");
    printf("\nPizza A: 10 inches = Php 178.00\nPizza B: 12 inches = Php 259.00\nPizza C: 14 inches = Php 314.00\n");
    printf("\n********************************\n");

    char answer;
    // char answeR;
    printf("\nWhat's your order? Please choose between A, B, or C. ");
    scanf("\n%c", &answer);
    answer = toupper(answer);

    if (answer == 'A')
    {
        double *pIzza, pizza1;
        pizza1 = 100 * (3.14159 / 4);
        pIzza = &pizza1;
        printf("\nThe area of Pizza A is %.2lf square inches.\n", *pIzza);
        double price;
        price = 178 / pizza1;
        printf("\nThe price of the divided area is Php %.2lf which makes it the second cheapest among the three.\n", price);
        printf("\n");
    }
    else if (answer == 'B')
    {
        double *pIzza, pizza2;
        pizza2 = 144 * (3.14159 / 4);
        pIzza = &pizza2;
        printf("\nThe area of Pizza B is %.2lf square inches.\n", *pIzza);
        double price2;
        price2 = 259 / pizza2;
        printf("\nThe price of the divided area is Php %.2lf which makes it the most expensive among the three.", price2);
        printf("\n");
    }
    else if (answer == 'C')
    {
        double *pIzza, pizza3;
        pizza3 = 196 * (3.14159 / 4);
        pIzza = &pizza3;
        printf("\nThe area of Pizza C is %.2lf square inches.\n", *pIzza);
        double price3;
        price3 = 314 / pizza3;
        printf("\nThe price of the divided area is Php %.2lf which makes it the least expensive among the three.\n", price3);
        printf("\n");
    }
    else
    {
        printf("\nThat item is not on the menu. Please choose between 'A', 'B', or 'C'.");
        char answeR;
        printf("\n\nPlease input your order: ");
        scanf("%c", &answeR);
        scanf("%c", &answeR);
        answeR = toupper(answeR);

        if (answeR == 'A')
        {
            double *pIzza, pizza1;
            pizza1 = 100 * (3.14159 / 4);
            pIzza = &pizza1;
            printf("\nThe area of Pizza A is %.2lf square inches.\n", *pIzza);
            double price;
            price = 178 / pizza1;
            printf("\nThe price of the divided area is Php %.2lf which makes it the second cheapest among the three.\n", price);
            printf("\n");
        }
        else if (answeR == 'B')
        {
            double *pIzza, pizza2;
            pizza2 = 144 * (3.14159 / 4);
            pIzza = &pizza2;
            printf("\nThe area of Pizza B is %.2lf square inches.\n", *pIzza);
            double price2;
            price2 = 259 / pizza2;
            printf("\nThe price of the divided area is Php %.2lf which makes it the most expensive among the three.", price2);
            printf("\n");
        }
        else if (answeR == 'C')
        {
            double *pIzza, pizza3;
            pizza3 = 196 * (3.14159 / 4);
            pIzza = &pizza3;
            printf("\nThe area of Pizza C is %.2lf square inches.\n", *pIzza);
            double price3;
            price3 = 314 / pizza3;
            printf("\nThe price of the divided area is Php %.2lf which makes it the least expensive among the three.\n", price3);
            printf("\n");
        }
    }
}

// note: Pizza C is the cheapest with Php 2.04 per square inches.
