#include <stdio.h>

int main()
{

    int num[] = {1, 2, 3};
    int(*p)[3] = &num;

    printf("%p", p);
    printf("\n%p", &num);
    printf("\n%p", num + 1); // pointer arithmetic
                             // add an int size of 4 to address num
    printf("\n%d", **p);

    int x[5];

    printf("\nInput elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", x + i); // access the array using dynamic calling
    }

    printf("\nElements in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(x+i));
    }

    
}