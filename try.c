#include <stdio.h>
/* Sariling Atin Aircraft Carrier allows two pieces of luggage and maximum 35 kilos
    for each luggage and charge Php.250.00 for each luggage.

    If the luggage exceeds the allowable weight, an excess luggage
    fee of Php.150.00 per kilo is charged per luggage.

    If any of the luggage weigh only 5kilos – 10kilos, a refund of Php. 25.00 per
    luggage is given to the passenger. Display the weight of each luggage and
    then compute and display the total cost / charge / refund to the passenger.
   */

int main()
{

    const int ONE_LUGGAGE = 250;
    const int CHARGE = 150;
    const int REFUND = 25;
    const int MAX = 35;
    double luggages[2];
    double totalcost = 0;
    int carry;
    double excess;

    printf("How many luggages do you have? Please input between 1 and 2: ");
    scanf("%d", &carry);
    printf("\n*********Sariling Atin Aircraft Carrier*********");

    switch (carry)
    {
    case 1:
        printf("\nInput the weight of the first luggage: ");
        scanf("%lf", &luggages[0]);
        break;
    case 2:
        printf("\nInput the weight of the first luggage: ");
        scanf("%lf", &luggages[0]);
        printf("Input the weight of the second luggage: ");
        scanf("%lf", &luggages[1]);
        break;
    default:
        printf("Invalid input. Please choose between 1 and 2.");
        return 0;
    }
    printf("************************************************\n\n");

    double cost1 = (luggages[0] <= MAX || luggages[0] > 10) ? ONE_LUGGAGE : (luggages[0] - MAX) * ONE_LUGGAGE;
    double cost2 = (luggages[1] <= MAX || luggages[1] > 10) ? ONE_LUGGAGE : (luggages[1] - MAX) * ONE_LUGGAGE;
    double cost3 = cost1 + cost2;

    double charge1 = (luggages[0] > MAX) ? ((luggages[0] - MAX) * CHARGE) : 0;
    double charge2 = (luggages[1] > MAX) ? ((luggages[1] - MAX) * CHARGE) : 0;
    double totalcharge = charge1 + charge2;

    double refund1 = (luggages[0] > MAX && luggages[0] > 10) ? 0 : REFUND;
    double refund2 = (luggages[1] > MAX && luggages[1] > 10) ? 0 : REFUND;
    double totalrefund = refund1 + refund2;

    totalcost = (cost3 + totalcharge) - totalrefund;

    if (luggages[0] > MAX && luggages[1] > MAX)
    {

        excess = (luggages[0] - MAX) + (luggages[1] - MAX);
    }

    else if (luggages[0] > MAX)
    {
        excess = (luggages[0] - MAX);
    }
    else if (luggages[1] > MAX)
    {
        excess = (luggages[1] - MAX);
    }
    else
        excess = (luggages[0] - MAX);

    if (carry == 1)
    {
        printf("The weight of the first luggage: %.2lfkg\n", luggages[0]);
    }
    else
    {
        printf("The weight of the first luggage: %.2lfkg\n", luggages[0]);
        printf("The weight of the second luggage: %.2lfkg\n", luggages[1]);
    }

    printf("The total weight of the luggages: %.2lfkg\n", luggages[0] + luggages[1]);

    if (luggages[0] > MAX || luggages[1] > MAX)
    {
        printf("Excess kilo/s: %.2lfkg\n", excess);
        printf("Charge per kilo: %d\n", CHARGE);
    }
    printf("Total charge: %.2lf\n", totalcharge);
    printf("Total refund: %.2lf\n", totalrefund);
    printf("Total cost: %.2lf\n", totalcost);
}