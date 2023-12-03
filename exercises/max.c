#include <stdio.h>

int main(){
    int num1, num2, num3, max;

    printf("Input numbers from 1-3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

 
    max = num1; 

    if (num2 > max){
        max = num2;
    }

    if (num3 > num2){
        max = num3;
    }

    printf("%d is the maximum number.", max);




}