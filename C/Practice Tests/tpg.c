#include <stdio.h>
#include <string.h>

int main() {
    char string[51];
    int letter = 0, count = 0, answer = 0;

    fgets(string, 50, stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        // to count the characters only
        if (string[i] != '\n' && string[i] != ' ') {
            count++;

            // included 'A' in case Ara input a capital letter
            if (string[i] == 'a' || string[i] == 'A') {
                letter++;
            }
        }
    }

    int required_a = count / 2 + 1;

    if (letter >= required_a) {
        answer = count;
    } else {
        int remaining = count - letter;
        answer = remaining - 1;
    }

    printf("%d\n", answer);

    return 0;
}
