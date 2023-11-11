#include <stdio.h>
#include <conio.h>

int main()
{

    /*
   PROGRAMMING EXERCISE 1-2
Prepare a program that converts hours to minutes only. A typical conversion should 
write the message
    */
 int hours;
 int minutes;
 int converted;

 printf("\nEnter a number of hour/s (1-24) that you want to convert to minutes: ");
 scanf("%d", &hours);

minutes = hours * 60;
converted = minutes;

printf("\n%d hours is equal to %d in minutes.\n\n",hours, converted);



                                                                                                                                  
}