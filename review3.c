#include <stdio.h>

int main()
{
    /*
    Arnie likes to jog in the morning. As he jogs, he counts the number of strides
    he makes during the first minutes and during the last minute of his jogging
    Arnie then averages these two and calls this the average number of strides
    he makes in a minute when he jogs. Write a program that accepts these averages and then outputs
    the distance Arnie has jogged in miles. Assume Arnie’s stride to be 2.5 feet. (there are 5280 feet in a mile).
    */

    float average;
    const float STRIDE = 2.5;
    float distance;
    float miles;

    printf("\nInput the average of strides per minute: ");
    scanf("%f", &average);

    distance = average * 2 * STRIDE;
    miles = distance / 5280;

    printf("\nThe distance that Arnie jogged in mile/s: %.2f\n\n", miles);
}