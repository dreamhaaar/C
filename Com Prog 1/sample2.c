#include <stdio.h>
#include <conio.h>

int main(){

// area of triangle
// base * height

int triangle, base, height;

printf("\nInput the base: ");
scanf("%d", &base);

printf("\nInput the height: ");
scanf("%d", &height);

triangle = 0.5 * base * height;

printf("\nThe are of the triangle is %10d", triangle);

getch();





}