#include <stdio.h>

int main(){

int time, checker;

printf("Input the time in 24-hour format: ");
scanf("%d", &time);

checker = (time >= 5  && time <=12)? 1 : ((time > 12 && time <= 18)? 2 : (time > 18 && time <=24)? 3 : printf("Invalid hour."));
(checker == 1)? printf("Morning!") : (checker == 2)? printf("Afternoon!") : (checker == 3)? printf("Evening!") : 0;






}