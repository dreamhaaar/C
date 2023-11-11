#include <stdio.h>
#include <ctype.h>

// to access the members of struct later on the code
typedef struct
{
    char type[15];
} class_type;

// created a function outside the main function to make it brief and concise
void warship(char class_id)
{
    // storing value to the member of struct
    class_type warship[4] = {
        {"Battleship"},
        {"Cruiser"},
        {"Destroyer"},
        {"Trigate"}};

    // selection process
    if (class_id == 'B')
    {
        printf("Class Type: %s.\n", warship[0].type);
    }
    else if (class_id == 'C')
    {
        printf("Class Type: %s.\n", warship[1].type);
    }
    else if (class_id == 'D')
    {
        printf("Class Type: %s.\n", warship[2].type);
    }
    else if (class_id == 'F')
    {
        printf("Class Type: %s.\n", warship[3].type);
    }
    else
    {
        printf("Not a War Ship.\n");
    }
}

int main()
{
    // initialization
    char class_id;

    // input
    printf("Input the class ID to determine its class type.\n\n");
    printf("Class ID: ");
    scanf(" %c", &class_id);

    // to make the input character into upper case
    class_id = toupper(class_id);

    // called the function warship to perform its tasks
    warship(class_id);

    return 0;
}
