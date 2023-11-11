#include <stdio.h>

int main()
{
    FILE *ptf = fopen("ayokona.txt", "a");
    fprintf(ptf, "Ayoko na mag aral emiiii");
    fclose(ptf);

    /*

    if (remove("huhu.txt") == 0)
        {
            printf("The file is DELETED");
        }

        else
            printf("The file is NOT DELETED");
    */

    return 0;
}