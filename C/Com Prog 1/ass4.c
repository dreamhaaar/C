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

    int answer;
    printf("\nWhat do you want to purchase? \n\nType 1 for Candy A, Type 2 for Candy B, Type 3 for Candy C, and Type 4 for Candy D. ");
    scanf("%d", &answer);

    if (answer == 1)

    {
        float buy1;
        printf("\nHow many kilograms do you want to buy? ");
        scanf("%f", &buy1);
        double payment1 = buy1 * 35;
        printf("\nThe total amount that you need to pay is %.2lf\n", payment1);
    }

    else if (answer == 2 )
    {
        float buy2;
        printf("\nHow many kilograms do you want to buy? ");
        scanf("%f", &buy2);
        double payment2 = buy2 * 45;
        printf("\nThe total amount that you need to pay is %.2lf\n", payment2);
    }

    else if (answer == 3 )
    {
        float buy3;
        printf("\nHow many kilograms do you want to buy? ");
        scanf("%f", &buy3);
        double payment3 = buy3 * 56;
        printf("\nThe total amount that you need to pay is %.2lf\n", payment3);
    }

    else if (answer == 4)
    {
        float buy4;
        printf("\nHow many kilograms do you want to buy? ");
        scanf("%f", &buy4);
        double payment4 = buy4 * 57.50;
        printf("\nThe total amount that you need to pay is Php.%.2lf\n", payment4);
    }

    printf("\nThank you for purchasing!\n\n");
    return 0;
}
