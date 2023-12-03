#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assuming num1 is the largest initially
    largest = num1;

    // Check if num2 is larger than current largest
    if (num2 > largest) {
        largest = num2;
    }

    // Check if num3 is larger than current largest
    if (num3 > largest) {
        largest = num3;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
