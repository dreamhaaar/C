#include <stdio.h>

int main() {
    const int ONE_LUGGAGE = 250;
    const int CHARGE = 150;
    const int REFUND = 25;
    const int MAX = 35;
    double luggages[2];
    double total_weight, total_charge, total_refund, total_cost;
    int carry;

    printf("How many luggages do you have? Please input between 1 and 2: ");
    scanf("%d", &carry);
    printf("\n*********Sariling Atin Aircraft Carrier*********\n");

    switch (carry) {
        case 1:
            printf("Input the weight of the first luggage: ");
            scanf("%lf", &luggages[0]);
            total_weight = luggages[0];
            break;
        case 2:
            printf("Input the weight of the first luggage: ");
            scanf("%lf", &luggages[0]);
            printf("Input the weight of the second luggage: ");
            scanf("%lf", &luggages[1]);
            total_weight = luggages[0] + luggages[1];
            break;
        default:
            printf("Invalid input. Please choose between 1 and 2.");
            return 0; // Exit the program if input is invalid
    }
    printf("************************************************\n");

    double cost1 = (luggages[0] <= MAX) ? ONE_LUGGAGE : 0;
    double cost2 = (luggages[1] <= MAX) ? ONE_LUGGAGE : 0;
    double total_cost_luggages = cost1 + cost2;

    double charge1 = (luggages[0] > MAX) ? ((luggages[0] - MAX) * CHARGE) : 0;
    double charge2 = (luggages[1] > MAX) ? ((luggages[1] - MAX) * CHARGE) : 0;
    total_charge = charge1 + charge2;

    double refund1 = (luggages[0] >= 5 && luggages[0] <= 10) ? REFUND : 0;
    double refund2 = (luggages[1] >= 5 && luggages[1] <= 10) ? REFUND : 0;
    total_refund = refund1 + refund2;

    total_cost = (total_cost_luggages + total_charge) - total_refund;

    printf("The weight of the first luggage: %.2lf kg\n", luggages[0]);
    if (carry == 2) {
        printf("The weight of the second luggage: %.2lf kg\n", luggages[1]);
        printf("The total weight of the luggages: %.2lf kg\n", total_weight);
    }
    printf("Total charge: Php %.2lf\n", total_charge);
    printf("Total refund: Php %.2lf\n", total_refund);
    printf("Total cost: Php %.2lf\n", total_cost);

    return 0;
}
