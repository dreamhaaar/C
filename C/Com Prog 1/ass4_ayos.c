#include <stdio.h>

#include <stdio.h>

// to store members "variables"
typedef struct
{
    char name[10];
    float price;
} candy;

int main()
{
    // create a variable for the struct and store value 
    candy items[4] = {
        {"Candy A", 35.00},
        {"Candy B", 45.00},
        {"Candy C", 56.00},
        {"Candy D", 57.50}};

    // initialization
    float orders[4], sum;

    // menu for the candies
    printf("\n*******************************\n");
    printf("\tMENU\t\n");
    printf("Candy A: Php. 35.00/kg\nCandy B: Php. 45.00/kg\nCandy C: Php. 56.00/kg\nCandy D: Php. 57.50/kg ");
    printf("\n*******************************\n");

    // input
    printf("\nInput the amount of kilograms that you want to purchase.\n");
    for (int i = 0; i < 4; i++){
        printf("%s: ", items[i].name);
        scanf("%f", &orders[i]);
        sum += orders[i] * items[i].price; }
    
    // output the ordered items
    printf("\nThe list of the amount of candies that you bought are as follows:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s: %.2fkg\n", items[i].name, orders[i]);
    }
    // output the total amount of bought items
    printf("\nThe amount of purchased items are Php %.2f", sum);

    return 0;
}
