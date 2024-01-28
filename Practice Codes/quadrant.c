#include <stdio.h>

int main()
{
    /*Write a C program to accept a coordinate point in
     an XY coordinate system and determine in which quadrant the coordinate point lies.*/
    int x, y, z;

    printf("Input the x-coordinate: ");
    scanf("%d", &x);

    printf("Input the y-coordinate: ");
    scanf("%d", &y);


    z = (x > 0) ? ((y > 0) ? 1 : 4) : ((x < 0) ? ((y > 0) ? 2 : 3) : 0);

    printf("Quadrant %d", z);
}