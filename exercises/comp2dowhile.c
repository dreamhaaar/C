#include <stdio.h>
#include <math.h>

int main()
{

    // 1 to n compute the sum of squares

    int i = 1, n, square = 0;
    printf("Input the number: ");
    scanf("%d", &n);
    do
    {
   
        square += i * i;
        printf("%d^2 = %d\n", i, i * i);
        i++;
    } while (i <= n);
    printf("The sum of the squares: %d", square);
}