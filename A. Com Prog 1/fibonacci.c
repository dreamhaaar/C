#include <stdio.h>

int main()
{
    // create a program for fibonacci sequence
    int a;
    int m = 0;
    int n = 1;
    int o;
    

    printf("\nEnter the number of terms in the sequence: ");
    scanf("%d", &a);

    printf("\nThe Fibonacchi numbers are: ");

    for (int i = 0; i <= a; i++)
    {
        printf("%d ", o);
        m = n;
        n = o;
        o = m + n;
    }
    printf("\n\n");
}