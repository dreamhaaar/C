#include <stdio.h>

int main()
{
    // get the radius of the circle
    //  display the area and circumference

    double radius, area, circumference;
    double const PI = 3.14159;

    printf("\nInput the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * (radius * radius);
    circumference = 2 * PI * radius;

    printf("\nThe area of the circle is %.2lf", area);
    printf("\n\nThe circumference of the circle is %.2lf\n\n", circumference);

  
}