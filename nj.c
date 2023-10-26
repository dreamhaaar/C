#include <stdio.h>

int main(){


int a;

printf("Input a number: ");
scanf("%d", &a);

if (a < 34){
    printf("PLEASANT");
} else if ( a >= 35 || a <= 60){
    printf("UNPLEASANT");
} else if ( a > 60) printf("HAZARDOUS");




}