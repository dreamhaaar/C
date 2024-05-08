#include <stdio.h>

void CS(int a, int b, int *c) {
    a *= b;
    b = a - *c;
    *c = a - b;
    printf("CS: %3d%3d%3d\n", a, b, *c);
}

void IT(int *a, int *b, int c) {
    *a = ++*b + c++;
    *b += c;
    c = *a + *b;
    printf("IT: %3d%3d%3d\n", *a, *b, c);
}

int main() {
    int a = 15, b = 5, c = 10;
    printf("Main: %3d%3d%3d\n", a, b, c);
    CS(a, b, &c);
    printf("Main: %3d%3d%3d\n", a, b, c);
    IT(&a, &b, c);
    printf("Main: %3d%3d%3d\n", a, b, c);
    CS(c, a, &b);
    printf("Main: %3d%3d%3d\n", a, b, c);
    IT(&b, &c, a);
    printf("Main: %3d%3d%3d\n", a, b, c);
    IT(&c, &a, b);
    printf("Main: %3d%3d%3d\n", a, b, c);
    return 0;
}