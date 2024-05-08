#include <stdio.h>
#include <string.h>

int main() {
    char first[20], second[15];
    char third[20] = "God Loves U";
    char fourth[20] = "GOD BLESS U";

    // a. Reverse the string "GOD BLESS U"
    strrev(fourth);
    printf("a. strrev(fourth): %s\n", fourth);

    // b. Convert the string "God Loves U" to uppercase
    strupr(third);
    printf("b. strupr(third): %s\n", third);

    // c. Concatenate the first 5 characters of "God Loves U" to "GOD BLESS U"
    strncat(fourth, third, 5);
    printf("c. strncat(fourth,third,5): %s\n", fourth);

    // d. Convert "GOD BLESS U" to lowercase
    strlwr(fourth);
    printf("d. strlwr(fourth): %s\n", fourth);

    // e. Copy the first 5 characters of "GOD BLESS U" to 'first'
    strncpy(first, fourth, 5);
    printf("e. strncpy(first,fourth,5): %s\n", first);

    // f. Copy "God Loves U" to 'second'
    strcpy(second, third);
    printf("f. strcpy(second,third): %s\n", second);

    // g. Calculate the length of "God Loves U"
    printf("g. strlen(third): %zu\n", strlen(third));

    // h. Concatenate the first 4 characters of "GOD BLESS U" to "God Loves U"
    strncat(third, fourth, 4);
    printf("h. strncat(third,fourth,4): %s\n", third);

    // i. Calculate the length of "God Loves U" after concatenation
    printf("i. strlen(third): %zu\n", strlen(third));

    // j. Copy the first 3 characters of "God Loves U" to 'first'
    strncpy(first, third, 3);
    printf("j. strncpy(first,third,3): %s\n", first);

    return 0;
}
