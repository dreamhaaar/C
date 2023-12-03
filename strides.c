#include <stdio.h>

int main(){

/*Arnie likes to jog in the morning.
 As he jogs, he counts the number of strides he makes during 
 the first minutes and during the last minute of his jogging.

  Arnie then averages these two and calls this the average 
  number of strides he makes in a minute when he jogs. 

  Write a program that accepts these averages and 
  then outputs 
  the distance Arnie has jogged in miles. Assume Arnie’s stride 
  to be 2.5 feet. (there are 5280 feet (about 1.61 km) in a mile). 
*/

double ave_first, ave_last, distance, totalStrides;

printf("Input the average for the first minute: ");
scanf("%lf", &ave_first);

printf("Input the average for the last minute: ");
scanf("%lf", &ave_last);

totalStrides = (ave_first + ave_last) / 2;
int const FEET = 5280;
distance = (2.5 * totalStrides) / FEET;

printf("The distance: %.2lf", distance);






}