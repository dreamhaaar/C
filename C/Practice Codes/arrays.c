#include <stdio.h>

int main()

{
    double prices1, prices2, prices3;

    printf("Input a number: ");
    scanf("%lf", &prices1);

    printf("Input a number: ");
    scanf("%lf", &prices2);

    printf("Input a number: ");
    scanf("%lf", &prices3);

    double total;
    total = prices1 + prices2 + prices3;

    printf("The sum of your items is: $%.2lf\n", total);

    return 0;
}