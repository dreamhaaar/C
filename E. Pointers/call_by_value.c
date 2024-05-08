#include <stdio.h>

void f(int []);
void g(int []);
void print(int []);

int main() {
    int i, a[] = {10, 20, 30};

    printf("Original value: ");
    for (i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }

    print(a);

    printf("\nOriginal value: ");
    for (i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}

void f(int a[]) {
    printf("\nAddress of array in function f(): %p\n", (void*)a);
    int i;
    for (i = 0; i < 3; i++) {
        a[i]++;
    }
}

void g(int a[]) {
    printf("\nAddress of array in function g(): %p\n", (void*)a);
    int i;
    for (i = 0; i < 3; i++) {
        a[i] += 2;
    }
}

void print(int a[]) {
    int i;
    f(a);
    printf("\nFunction value: ");
    for (i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }

    g(a);
    printf("\nFunction value: ");
    for (i = 0; i < 3; ++i) {
        printf("%d ", a[i]);
    }
}
