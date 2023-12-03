#include <stdio.h>

#include <stdio.h>

void printLuggageDetails(double weight[2], double weights, int twoLuggage, int charge1, int refund1, double total)
{
    printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
    printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
    printf("The total weight of luggages: %.2lfkg\n", weights);
    printf("Cost of two luggage: %d\n", twoLuggage);
    printf("Charge: %d\n", charge1);
    printf("Refund: %d", refund1);
    printf("\n************************************************\n");
    printf("\nThe total cost of your luggages: %.2lf\n", total);
}

int main()
{
    const int MAX = 35;
    double weight[2];
    int twoLuggage = 500, refund = 25, charge = 150;
    int refund1 = 0, charge1 = 0;
    double minus = 0, minus1 = 0, total = 0;

    printf("\n*********Sariling Atin Aircraft Carrier*********");
    printf("\nInput the weight of the first luggage: ");
    scanf("%lf", &weight[0]);
    printf("Input the weight of the second luggage: ");
    scanf("%lf", &weight[1]);
    printf("************************************************\n");
    printf("\n************************************************");

    double weights = weight[0] + weight[1];
    if (weight[0] < 5 && weight[1] < 5)
    {
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
        printf("Your luggages are below 5 kilos. Congrats, free of charge!\n\n");
    }
    else if (weight[0] < 5 && weight[1] > MAX)
    {
        refund1 = refund;
        minus1 = weight[1] - MAX;
        charge1 = minus1 * charge;
        total = twoLuggage + charge1 - refund1;
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
    }
    else if (weight[0] > MAX && weight[1] < 5)
    {
        refund1 = refund;
        minus1 = weight[1] - MAX;
        charge1 = minus1 * charge;
        total = twoLuggage + charge1 - refund1;
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
    }
    else if (weight[0] < 5 && weight[1] <= 10)
    {
        refund1 = refund;
        total = 250 - refund1;
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
    }
    else if (weight[0] >= 10 && weight[1] < 5)
    {
        refund1 = refund;
        total = 250 - refund1;
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
    }
    else if (weight[0] <= 10 && weight[1] <= 10)
    {
        if (weight[0] >= 5 && weight[1] >= 5)
        {
            refund1 = refund + refund;
            total = twoLuggage - refund1;
            printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
        }
    }
    else if (weight[0] <= 10 || weight[1] <= 10)
    {
        if (weight[0] >= 5 || weight[1] >= 5)
        {
            refund1 = refund;
            if (weight[0] > MAX)
            {
                minus = weight[0] - MAX;
            }
            else if (weight[1] > MAX)
            {
                minus = weight[1] - MAX;
            }
            charge1 = charge * minus;
            total = twoLuggage + charge1 - refund1;
            printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, total);
        }
    }
    else if (weight[0] <= MAX && weight[1] <= MAX)
    {
        printLuggageDetails(weight, weights, twoLuggage, charge1, refund1, twoLuggage);
    }
    else if (weight[0] >= MAX && weight[1] >= MAX)
    {
        minus = weight[0] - MAX;
        minus1 = weight[1] - MAX;
        minus1 += minus;
        charge = 150 * minus1;
        total = 0;
        total = twoLuggage + charge;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("The total weight of luggages: %.2lfkg\n", weights);
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Excess kilo/s: %.2lf\n", minus1);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n************************************************\n");
        printf("\nThe total cost of your luggages: %.2lf\n", total);
    }
    else if (weight[0] >= MAX || weight[1] <= MAX)
    {
        minus = weight[0] - MAX;
        minus1 += minus;
        charge = 150 * minus1;
        total = twoLuggage + charge;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("The total weight of luggages: %.2lfkg\n", weights);
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Excess kilo/s: %.2lf\n", minus1);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n************************************************\n");
        printf("The total cost of your luggages: %.2lf\n\n", total);
    }
    else if (weight[0] <= MAX || weight[1] >= MAX)
    {
        minus1 = weight[1] - MAX;
        minus1 += minus;
        charge = 150 * minus1;
        total = twoLuggage + charge;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("The total weight of luggages: %.2lfkg\n", weights);
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Excess kilo/s: %.2lf\n", minus1);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n************************************************\n");
        printf("The total cost of your luggages: %.2lf\n\n", total);
    }
}
