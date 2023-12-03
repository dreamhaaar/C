#include <stdio.h>
#include <ctype.h>

// to access the members
typedef struct
{
    char type[50];
} loudness_type;

// function for loudness
// to make the main function short and concise
void loudness(double loudness_Decibel)
{

    // storing values to the members of struct
    loudness_type measurement[5] = {
        {"Quite"},
        {"Introusive"},
        {"Annoying"},
        {"Very Annoying"},
        {"Uncomfortable"}};

    // selection process
    if (loudness_Decibel <= 50)
    {
        printf("\nLoudness Type: %s\n", measurement[0].type);
    }
    else if (loudness_Decibel <= 70)
    {
        printf("\nLoudness Type: %s\n", measurement[1].type);
    }
    else if (loudness_Decibel <= 90)
    {
        printf("\nLoudness Type: %s\n", measurement[2].type);
    }
    else if (loudness_Decibel <= 110)
    {
        printf("\nLoudness Type: %s\n", measurement[3].type);
    }
    else if (loudness_Decibel > 110)
    {
        printf("\nLoudness Type: %s\n", measurement[4].type);
    }
}

int main()
{
    // initialization for the input 
    double loudness_Decibel;
    
    // input
    printf("Input the loudness in Decibel: ");
    scanf("%lf", &loudness_Decibel);

    // call the function loudness to perform it's tasks
    loudness(loudness_Decibel);

    return 0;
}
