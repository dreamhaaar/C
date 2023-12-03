#include <stdio.h>

typedef struct
{
    char size[20];
    double prices;
} pizza;
int main()
{

    /*Pizza parlors offers different pizza sizes in terms of diameters. For example,
    Domino’s pizza has three options: 10 inches, as inches and 14 inches diameter.
     Extravaganza pizza cost 178 pesos, 259 pesos and 354 pesos respectively.
      Write a program that will input the diameter of the pizza and its price. Determine and print
    1.	area of the pizza
    2.	pric divided by area.
    Note that the area of a circle is equivalent to PI * (diameter / 2)2 .
    */
    pizza options[3] = {
        {"10 inches", 178.00},
        {"12 inches", 259.00},
        {"14 inches", 354.00}};

    int dia;
    double area;
    const double PI = 3.14159;
    double priceA;

    printf("\n***************MENU*************\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\t%s: %.2lf\n", options[i].size, options[i].prices);
    }
    printf("********************************\n");

    printf("\nInput the diameter of the pizza: ");
    scanf("%d", &dia);

    if (dia == 10)
    {
        area = (PI / 4) * 100;
        priceA = options[0].prices / area;
        printf("\nThe area of the pizza is %.2lf square inches.\n", area);
        printf("\nThe price of pizza divided by area is %.2lf pesos.\n", priceA);
    }
    else if (dia == 12)
    {
        area = (PI / 4) * 144;
        priceA = options[1].prices / area;
        printf("\nThe area of the pizza is %.2lf square inches.\n", area);
        printf("\nThe price of pizza divided by area is %.2lf pesos.\n", priceA);
    }
    else if (dia == 14)
    {
        area = (PI / 4) * 196;
        priceA = options[2].prices / area;
        printf("\nThe area of the pizza is %.2lf square inches.\n", area);
        printf("\nThe price of pizza divided by area is %.2lf pesos.\n", priceA);
    }
    else
        printf("Please input between 10, 12, or 14.");
}