#include <stdio.h>

int main()
{

    /*
   PROGRAMMING EXERCISE 1-3
Consider three numbers a, b, and c. Write a program that will compute and display their 
sum, difference, product, quotients (a/ b/ c) and the sum of their squares.
    */
 
int numbers[3] = {3, 4, 5};
int sum =  numbers[0] + numbers[1] + numbers [2];
int difference = numbers[0] - numbers[1] - numbers [2];
int product = numbers[0] * numbers[1] * numbers [2];
int qoutients = numbers[0] / numbers[1] / numbers [2];
int square1 = numbers[0]*numbers[0];
int square2 = numbers[1]*numbers[1]; 
int square3 = numbers [2]*numbers [2];
int sumofsquares = square1 + square2+ square3;

printf("The sum is %d.\n", sum);
printf("The difference is %d.\n", difference);
printf("The product is %d.\n", product);
printf("The qoutient is %d.\n", qoutients);
printf("The sum of their squares is %d.\n", sumofsquares);





                                                                                                                                  
}