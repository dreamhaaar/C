#include <stdio.h>

int main()
{
    const int MAX = 35;
    double weight[2];
    /* Sariling Atin Aircraft Carrier allows two pieces of luggage and maximum 35 kilos
     for each luggage and charge Php.250.00 for each luggage.

     If the luggage exceeds the allowable weight, an excess luggage
     fee of Php.150.00 per kilo is charged per luggage.

     If any of the luggage weigh only 5kilos – 10kilos, a refund of Php. 25.00 per
     luggage is given to the passenger. Display the weight of each luggage and
     then compute and display the total cost / charge / refund to the passenger.
    */

    printf("\nInput the weight of the first luggage: ");
    scanf("%lf", &weight[0]);
    printf("Input the weight of the second luggage: ");
    scanf("%lf", &weight[1]);

    int twoLuggage = 250;
    int refund = 25;
    int charge = 150;
    double total = 0;
    int refund1 = 0;
    int charge1 = 0;
    double minus = 0;
    double minus1 = 0;


     if (weight[0] <= 10 && weight[1] <= 10)
    {
        if (weight[0] >= 5 && weight[1] >= 5)
        {
            refund1 = refund + refund;
            total = twoLuggage - refund1;
            printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
            printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
            printf("\n****************************\n");
            printf("Cost of two luggage: %d\n", twoLuggage);
            printf("Charge: %d\n", charge1);
            printf("Refund: %d", refund1);
            printf("\n****************************\n");
            printf("\nThe total cost of your luggages: %.2lf\n", total);
        }
    }

   else  if ((weight[0] <= MAX || weight[1] <= MAX))
    {
        if ((weight[0] > 10) || (weight[1] > 10))
        {
            refund1 = refund;
            total = twoLuggage ;
            printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
            printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
            printf("\n****************************\n");
            printf("Cost of two luggage: %d\n", twoLuggage);
            printf("Charge: %d\n", charge1);
            printf("Refund: %d", refund1);
            printf("\n****************************\n");
            printf("The total cost of your luggages: %.2lf\n\n", total);
        }
    }

    else if (weight[0] > MAX && weight[1] > MAX)
    {
        minus = weight[0] - MAX;
        minus1 = weight[1] - MAX;
        minus1 += minus;
        charge = 150 * minus1;
        total = twoLuggage + charge;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("\n****************************\n");
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n****************************\n");
        printf("The total cost of your luggages: %.2lf\n\n", total);
    }

    else if (weight[0] > MAX || weight[1] > MAX)
    {
        minus = weight[0] - MAX;
        minus1 = weight[1] - MAX;
        minus1 += minus;
        charge = 150 * minus1;
        total = twoLuggage + charge;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("\n****************************\n");
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n****************************\n");
        printf("The total cost of your luggages: %.2lf\n\n", total);
    }

    else if (weight[0] <= 10 || weight[1] <= 10)
    {
        if (weight[0] >= 5 || weight[1] >= 5)
        {
            refund1 = refund;
            total = twoLuggage - refund1;
            printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
            printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
            printf("\n****************************\n");
            printf("Cost of two luggage: %d\n", twoLuggage);
            printf("Charge: %d\n", charge);
            printf("Refund: %d", refund1);
            printf("\n****************************\n");
            printf("\nThe total cost of your luggages: %.2lf\n", total);
        }
    }

    /*else if ((weight[0] <= 10) || (weight[0] <= 10)){
        if ((weight[1] >= 5) || (weight[1] >= 5))
        {
            refund1 = refund;
            total = twoLuggage - refund1;
            printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
            printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
            printf("\n****************************\n");
            printf("Cost of two luggage: %d\n", twoLuggage);
            printf("Charge: %d\n", charge);
            printf("Refund: %d", refund1);
            printf("\n****************************\n");
            printf("\nThe total cost of your luggages: %.2lf\n", total);
        }
    }
    else if (((weight[0] >= 5) && (weight[0] <= 10)) && ((weight[1] >= 5) && (weight[1] <= 10)))
    {
        refund1 = refund + refund;
        total = twoLuggage - refund1;
        printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
        printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
        printf("\n****************************\n");
        printf("Cost of two luggage: %d\n", twoLuggage);
        printf("Charge: %d\n", charge);
        printf("Refund: %d", refund1);
        printf("\n****************************\n");
        printf("\nThe total cost of your luggages: %.2lf\n", total);
    }
   */
}

    else if ((weight[0] <= MAX || weight[1] <= MAX))
    {
        if ((weight[0] >= 5) || (weight[1] >= 5))
        {
            refund1 = refund;
            total = twoLuggage;
            printf("\nThe weight of the first luggage: %.2lfkg\n", weight[0]);
            printf("The weight of the second luggage: %.2lfkg\n", weight[1]);
            printf("\n****************************\n");
            printf("Cost of two luggage: %d\n", twoLuggage);
            printf("Charge: %d\n", charge1);
            printf("Refund: %d", refund1);
            printf("\n****************************\n");
            printf("The total cost of your luggages: %.2lf\n\n", total);
        }
    }
    