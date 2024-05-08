#include <stdio.h>

int main()
{
    char name[50];
    int number[5], checker1, checker2, checker3, checker4, checker5, sum = 0, average = 0;

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printf("\nInput answers. Choose between 1 and 5.\n\n");

    for (int i = 0; i < 5; i++){
        printf("Enter answer number %d: ", i + 1);
        scanf("%d", &number[i]); 
    }

    checker1 = (number[0] > 5) ? 0 : number[0];
    checker2 = (number[1] > 5) ? 0 : number[1];
    checker3 = (number[2] > 5) ? 0 : number[2];
    checker4 = (number[3] > 5) ? 0 : number[3];
    checker5 = (number[4] > 5) ? 0 : number[4];

    sum = checker1 + checker2 + checker3 + checker4 + checker5;
    average = sum * 0.5;

    printf("\nName: %s\n", name);
    printf("Answers: \n");

    for (int j = 0; j < 5; j++) {
        printf("Number %d: %d\n", j + 1, number[j]);
    }

    printf("\nThe sum is: %d", sum);
    printf("\nThe average is: %.2lf", (double)average);
}