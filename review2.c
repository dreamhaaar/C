#include <stdio.h>

int main(){
/*Write a program that will input 3 numbers 
and output the smallest of the three numbers.*/

int a, b, c;

printf("Input three numbers: ");
scanf("%d %d %d", &a, &b, &c);

if ( a  < b && a < c){
    printf("%d", a);

}
else if ( b  < a && b < c){
    printf("%d", b);

}
else if ( c  < a && c < b){
    printf("%d", c);

} else if ( a  == b && b == c){
    printf("%d", a);

}




}