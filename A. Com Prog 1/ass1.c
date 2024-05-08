#include <stdio.h>

int main()
{

    /*
    PROGRAMMING EXERCISE 1-1
    The volume of a rectangular box is given by the formula, V = length * width * height.Design a program that will calculate and display the volume of a box whose dimensions are specified by the user.
    */
   int length;
   int width;
   int height;
   int volume;


printf("Enter the value of length: ");
scanf("%d", &length);

printf("Enter the value of width: ");
scanf("%d", &width);

printf("Enter the value of height: ");
scanf("%d", &height);

volume = length * width * height;
printf("The volume of the rectangular box is %d.", volume);



                                                                                                                                  
}