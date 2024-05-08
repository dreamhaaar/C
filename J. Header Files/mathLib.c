#include <stdio.h>
#include <math.h>

int main() {
    double x = 5;
    double y = -10.1;


    double num = fabs(y);
    double pow_num = pow(2, 3);
    double cel = ceil(y);
    double flo = floor(y);
    double med = fmod(x, y);
    double pods = pow(10, 4);
    double square = sqrt(100);

    
    printf("Absolute value of -10.5: %4.2lf\n", num);
    printf("2 raised to the power of 3: %4.2lf\n", pow_num);
    printf("Ceiling of -10.5: %4.2lf\n", cel);
    printf("Floor of -10.5: %4.2lf\n", flo);
    printf("Remainder of 5 divided by -10.5: %4.2lf\n", med);
    printf("10 raised to the power of 4: %4.2lf\n", pods);
    printf("Square root of 5: %4.2lf\n", square);

    return 0;
}
