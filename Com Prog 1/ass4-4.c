#include <stdio.h>

/*
    PROGRAMMING EXERCISE 4-4
An applicant will be accepted to the Jedi Knight Academy if he is at least 200 cm tall; age
is between 21 and 25 inclusive, and a citizen of the Planet Endor. However, if the
applicant is recommendee of Jedi Master Obi Wan, he is accepted automatically
regardless of his height, age and citizenship. Write a program that would input the
applicant’s height, age, citizenship code (1- citizen 0-not citizen) and recommendee’s
code (1- recommended 0- not recommended) and then output whether the applicant is
accepted or rejected.
*/

struct applicant
{
    int height, age, citizenship, reco;
};

int main()
{
    struct applicant x;
    printf("\n*****************************************************************\n");
    printf("\tWELCOME TO THE JEDI KNIGHT ACADEMY!\t\n");
    printf("*****************************************************************\n");

    printf("\nPlease input your height in centimeters: ");
    scanf("%d", &x.height);

    printf("Please input your age: ");
    scanf("%d", &x.age);

    printf("Please input your citizenship code. Input 1 if you're a citizen and 0 if you're not. ");
    scanf("%d", &x.citizenship);

    printf("Are you a recommendee of Jedi Master Obi Wan? Input 1 if you're recommendee and 0 if you're not. ");
    scanf("%d", &x.reco);

    if (x.height >= 200)
    {
        if (x.age > 21 || x.age < 26)
        {
            if (x.citizenship == 1)
            {
                printf("\nYou're accepted in the academy. Congratulations!\n");
            }
        }
    }
    else if (x.height < 200 || x.age < 21 || x.age > 26 || x.citizenship == 0)
    {
        printf("\nThank you for your application. You did not pass the requirements.");
    }

    else if (x.reco == 1)
    {
        printf("\nYou're accepted in the academy. Congratulations!\n");
    }
    else
    {
        printf("\nThank you for your application. You did not pass the requirements.\n");
    }
    printf("\n");
}
