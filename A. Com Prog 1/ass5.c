#include <stdio.h>
#include <conio.h>

int main()
{
    // initialization
    double weightEarth, weightMars, weightJupiter;

    // input
    printf("\nInput your weight in pound on Earth: ");
    scanf("%lf", &weightEarth);

    //process
    weightMars = weightEarth * 0.38;
    weightJupiter = weightEarth * 2.64;

    // output
    printf("\nYour weight on Mars is %.2lf pounds while it is %.2lf pounds on Jupiter.\n\n", weightMars, weightJupiter);

    return 0;
}