#include <stdio.h>
#include <string.h>

int main() {
    // String Copying Functions
    char dest[20];
    const char src[] = "Hello, World!";
    char *ptr;
    ptr = stpcpy(dest, src);
    printf("stpcpy(): %s\n", dest);

    strcpy(dest, src);
    printf("strcpy(): %s\n", dest);

    strncpy(dest, src, 5);
    dest[5] = '\0'; // Null-terminate manually as strncpy might not null-terminate if src is longer than 5
    printf("strncpy(): %s\n", dest);

    size_t transformed = strxfrm(dest, src, sizeof(dest));
    printf("strxfrm(): %s (transformed characters: %zu)\n", dest, transformed);

    // String Concatenation Functions
    strcat(dest, src);
    printf("strcat(): %s\n", dest);

    strncat(dest, src, 5);
    printf("strncat(): %s\n", dest);

    // String Comparison Functions
    printf("strcmp(): %d\n", strcmp(dest, src));

    printf("strcoll(): %d\n", strcoll(dest, src));

    // Error Handling Functions
    char *error_message = strerror(1);
    printf("strerror(): %s\n", error_message);

    // String Search Functions
    printf("strcspn(): %zu\n", strcspn(dest, "aeiou"));
    printf("strspn(): %zu\n", strspn(dest, "aeiou"));
    printf("strpbrk(): %s\n", strpbrk(dest, "aeiou"));
    printf("strrchr(): %s\n", strrchr(dest, 'l'));

    // String Manipulation Functions
    printf("strchr(): %s\n", strchr(dest, 'l'));
    printf("strdup(): %s\n", strdup(dest));
    printf("strlen(): %zu\n", strlen(dest));

    // strrev() implementation
    {
        char *begin = dest;
        char *end = dest + strlen(dest) - 1;
        while (begin < end) {
            char temp = *begin;
            *begin = *end;
            *end = temp;
            ++begin;
            --end;
        }
    }
    printf("strrev(): %s\n", dest);

    return 0;
}
