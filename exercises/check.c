#include <stdio.h>

int main()
{
    /*If all three sides are equal, it's an "Equilateral Triangle".
If at least two sides are equal, it's an "Isosceles Triangle".
If none of the sides are equal, it's a "Scalene Triangle".*/

    int num1, num2, num3, checker;

    printf("Input the three sides: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    checker = (num1 == num2 && num2 == num3)? 1 : (num1 == num2 || num1 == num3)? 2 : (num1 != num2 && num2 != num3)? 3 : 2;
    //checker = (num1 == num2)? ((num2 == num3) ? 1 : 2): (num1 == num3)? 2 : (num2 == num3)? 2 : ((num1 != num2)? ((num2 != num3)? 3 : 2): 0);

    (checker == 1) ? printf("Equilateral Triangle") : (checker == 2) ? printf("Isosceles Triangle"): printf("Scalene Triangle");
}