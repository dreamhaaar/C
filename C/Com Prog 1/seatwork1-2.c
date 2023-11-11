#include <stdio.h>
#include <ctype.h>

// to access the members later on the code
typedef struct
{
    char damage[50];
} type_damage;

// a function to make the main function short and concise
void earthquake(double magnitude_Richter)
{

    // storing values to the members of struct
    type_damage richter_scale[5] = {
        {"LITTLE or NO DAMAGE"},
        {"THERE ARE SOME DAMAGES"},
        {"THERE ARE SERIOUS DAMAGE!"},
        {"DISASTER! HOUSE AND BUILDINGS MAY COLLAPSE!"},
        {"CATASTROPHE!"}};
  
    // selection process
    if (magnitude_Richter < 5.0)
    {
        printf("\n%s\n", richter_scale[0].damage);
    }
    else if (magnitude_Richter >= 5.0 && magnitude_Richter < 5.5)
    {
        printf("\n%s\n", richter_scale[1].damage);
    }
    else if (magnitude_Richter >= 5.5 && magnitude_Richter < 6.5)
    {
        printf("\n%s\n", richter_scale[2].damage);
    }
    else if (magnitude_Richter >= 6.5 && magnitude_Richter < 7.5)
    {
        printf("\n%s\n", richter_scale[3].damage);
    }
    else if (magnitude_Richter >= 7.5)
    {
        printf("\n%s\n", richter_scale[4].damage);
    }
    else
    {
        printf("\nInvalid Richter scale value.\n");
    }
}

int main()
{
    //initialization
    double magnitude_Richter;

    // input
    printf("Input the magnitude in Richter scale: ");
    scanf("%lf", &magnitude_Richter);

    // called the function earthquake to performe the tasks inside it 
    earthquake(magnitude_Richter);
    

    return 0;
}
