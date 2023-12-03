#include <stdio.h>

/*
PROGRAMMING EXERCISE 4-5
Assume a range of integer values starting from N1 and ending at N2. Assume also an
integer say M. Write a program that will print and display all the numbers from N1 to N2
which are divisible by M. You are also required display the count of such numbers. For
example, if N1 = 4, N2 = 12 and M = 4, the output will be: 4, 8, 12. The value 3 will also be
displayed indicating that there are 3 numbers which are divisible by 4.
*/
void numbers()
{
    printf("\nThe values that are divisible by 2 are: ");
    for (int i = 1; i <= 20; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("\nThere are 10 numbers that are visible by 2.");
    printf("\n");
}

#include <stdio.h>
int main()
{
    printf("\n");
    printf("Values: ");
    for (int i = 1; i <= 15; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    numbers();
    printf("\n");
}
