#include <stdio.h>

int main (){

double years, months, days, seconds;
char name[20];


printf("\nInput the name of a dinosaur: ");
fgets(name, 20, stdin);

printf("Input the number of years lived: ");
scanf("%lf", &years);

printf("\nName: %sYears lived: %.1lf", name, years);

months = years * 12;
days = 365.25 * years;
seconds = 86400 * days;

printf("\n\nNumber of months lived: %.1lf", months);
printf("\nNumber of days lived: %.1lf", days);
printf("\nNumber of seconds lived: %.1lf\n\n", seconds);









}