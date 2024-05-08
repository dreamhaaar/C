#include <stdio.h>

void f(int a[])
{
    a[0] = 15;
    a[1] = 30;
    a[2] = 45;
    int i;
    for (i = 0; i < 3; i++)
    {
        a[i]++;
    }
}

void g(int *a)
{
    a[0] = 15;
    a[1] = 30;
    a[2] = 45;

    for (int i = 0; i < 3; ++i)
    {
        a[i]++;
    }
}

int main()
{

    int i, a[] = {10, 20, 30};
    printf("Original value: ");
    for (i = 0; i < 3; ++i)
    {
        printf("%d ", a[i]);
    }

    f(a);
    printf("\nFunction value: ");
    for (i = 0; i < 3; ++i)
    {
        printf("%d ", a[i]);
    }

    printf("\nOriginal value: ");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d ", a[i]);
    }

    g(a);

    printf("\nFunction value: ");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d ", a[i]);
    }
}

// changes made on local variables will not  be reflected on the global
