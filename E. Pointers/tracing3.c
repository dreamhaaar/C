#include <stdio.h>
#include <conio.h>

void kar1(char *a, char *b, char *c)
{
    *a = 'c';
    *b = 'a';
    *c = 'b';
    printf("%c %c %c\n", *a, *b, *c);
}

int main()
{
    char a = 'c', b = 'b', c = 'a';

    printf("%c %c %c\n", a, b, c); // Print original values of a, b, and c

    kar1(&a, &b, &c); // Call kar1() and pass addresses of a, b, and c

    printf("%c %c %c\n", a, b, c); // Print values of a, b, and c after calling kar1()

    kar1(&c, &b, &a); // Call kar1() and pass addresses of a, b, and c

    printf("%c %c %c\n", a, b, c); // Print original values of a, b, and c

     kar1(&b, &a, &c); // Call kar1() and pass addresses of a, b, and c

    printf("%c %c %c\n", a, b, c); // Print original values of a, b, and c


    return 0;
}
