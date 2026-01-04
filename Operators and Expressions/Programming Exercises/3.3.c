/* 3.3 Modify the above program to display the two right-most digits 
of the integral part of the number. */

#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int intPart = (int)num;
    int lastTwoDigits = intPart % 100;
    printf("Two right-most digits: %d\n", lastTwoDigits);
    return 0;
}
