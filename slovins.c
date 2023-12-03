#include <stdio.h>
#include <math.h>

int main()
{

    int total = 0;
    double sample = 0, margin = 0;
    char letter[1] = "%";

    printf("\n*********************SLOVIN'S FORMULA*********************\n");
    printf("Input the total population: ");
    scanf("%d", &total);
    printf("\n");

    printf("Input the margin of error in percentage: ");
    scanf("%lf %c", &margin, letter);
    printf("\n");

    margin /= 100;
    margin *= margin;

    sample = (total / (1 + (total) * (margin)));
    int rounded;
    rounded = round(sample);
    printf("The sample size is: %.2lf or %d", sample, rounded);
    printf("\n\n");
}