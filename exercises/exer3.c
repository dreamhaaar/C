#include <stdio.h>

int main()
{
    /*Write a C program to read the value of an integer m 
    and display the value of n is 1 when m is larger than 0, 
    0 when m is 0 and -1 when m is less than 0.*/

    int m, n;

    printf("Input a number: ");
    scanf("%d", &m);

    if ( m > 0.0){
        n = 1;
    }
    else if ( m < 0.0){
        n = -1;
    }
    else if (m == 0){
        n = 0;
    }

    printf("N = %d", n);
}