#include <stdio.h>

int main()
{

    int m = 21;
    double n = 3.14;
    char ltr[] = "Andrea Mhar";

    int *pm = &m;
    double *pn = &n;
    char (*pltr)[] = &ltr;

    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("\nContent of m: %d", m);
    printf("\nContent of n: %lf", n);
    printf("\nContent of ltr: %s", ltr);

    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("\nAddress of &m: %p", pm);
    printf("\nAddress of &n: %p", pn);
    printf("\nAddress of &ltr: %p", pltr);

    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("\nContent of address of &m: %d", *pm);
    printf("\nContent of address of &n: %lf", *pn);
    printf("\nContent of address of &ltr: %s", *pltr);

    printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");

int x = 20;
int *px = &x;
int *pv;
pv = px; // Assigning the value of px to pv

printf("%d", *pv);



}