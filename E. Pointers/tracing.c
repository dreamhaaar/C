#include <stdio.h>
#include <conio.h>

void kar1(char, char, char);
void kar2(char *, char *, char *);
int main()
{
    char a = 'a', b = 'b', c = 'c';

    printf("%c %c %c\n", a, b, c);
    kar1(&a, b, &c);
    printf("%c %c %c\n", a, b, c);
    kar2(&a, &b, &c);
    printf("%c %c %c\n", a, b, c);
    kar1(&c, b, &a);
    printf("%c %c %c\n", a, b, c);
    kar2(&c, &a, &b);
    printf("%c %c %c\n", a, b, c);

    return 0;
}

void kar1(char *c, char b, char *a)
{
    *a = 'c';
    b = 'a';
    *c = 'b';
    printf("%c %c %c\n", *a, b, *c);
}

void kar2(char *b, char *a, char *c)
{
    *a = 'b';
    *b = 'c';
    *c = 'a';
    printf("%c %c %c\n", *a, *b, *c);
}