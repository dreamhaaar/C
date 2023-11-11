#include <stdio.h>

int main()
{
    /*
PROGRAMMING EXERCISE 4-6
A Video Rental gives a fine to their customers who return the CDs of tape later than
the due date. Input the number of days late and display the fine.
Days Fine
< = 2 10.00
<= 4 15.00
<= 5 20.00
>= 7 Equal to the amount of rent (CD =
50.00 / VHS = 35.00 )
*/
    int day;
    int type;
    float num1 = 10.00;
    float num2 = 15.00;
    float num3 = 20.00;
    float num4 = 50.00;
    float num5 = 35.00;

    printf("\n");
    printf("Input the number of days late: ");
    scanf("%d", &day);
    printf("\n");

    if (day <= 2)
    {
        printf("The fine for your rented tape is %.2f", num1);
    }
    else if (day <= 4)
    {
        printf("The fine for your rented tape is %.2f", num2);
    }
    else if (day <= 5)
    {
        printf("The fine for your rented tape is %.2f", num3);
    }
    else if (day >= 6)
    {

        printf("What did you rent? Type 1 for Tape and Type 2 for VHS.\t");
        scanf("%d", &type);
        {
            if (type == 1)
            {
                printf("\nThe fine for your rented tape is %.2f", num4);
            }
            else if (type == 2)
            {
                printf("\nThe fine for your rented tape is %.2f", num5);
            }
            else if (type != 1 || type != 1)
            {
                printf("\nPlease input either 1 or 2");
            }
        }
    }
    printf("\n");
    printf("\n");
}