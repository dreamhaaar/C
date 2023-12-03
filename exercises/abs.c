#include <stdio.h>

int main(){

/*absolute value of a number using nested ternary operators:*/

int num, checker;

printf("Input a number: ");
scanf("%d", &num);

checker = (num > 0)? num : (num * - 1);

printf("Absolute value is: %d", checker);



}