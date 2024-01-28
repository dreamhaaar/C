#include <stdio.h>

int main()
{
   int num1, num2, num3, max;

    printf("Input numbers from 1-3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2 && num1 > num3)? num1 : ((num2 > num1 && num2 > num3)? num2 : num3);

    printf("%d is the maximum number.", max);


}