#include <stdio.h>

int main() {
    float luggage1_weight, luggage2_weight, total_weight, total_cost;
    const float max_weight = 35;
    const float luggage_charge = 250;
    const float excess_charge = 150;
    const float refund_per_luggage = 25;

    printf("Enter weight of luggage 1: ");
    scanf("%f", &luggage1_weight);
    printf("Enter weight of luggage 2: ");
    scanf("%f", &luggage2_weight);

    total_weight = luggage1_weight + luggage2_weight;

    if (total_weight <= 2 * max_weight) {
        total_cost = 2 * luggage_charge;
        if (luggage1_weight >= 5 && luggage1_weight <= 10) {
            total_cost -= refund_per_luggage;
        }
        if (luggage2_weight >= 5 && luggage2_weight <= 10) {
            total_cost -= refund_per_luggage;
        }
    } else {
        total_cost = 2 * luggage_charge + (total_weight - 2 * max_weight) * excess_charge;
    }

    printf("\nWeight of luggage 1: %.2f kg\n", luggage1_weight);
    printf("Weight of luggage 2: %.2f kg\n", luggage2_weight);
    printf("Total cost/charge/refund: Php %.2f\n", total_cost);

    return 0;
}
