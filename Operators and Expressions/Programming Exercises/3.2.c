/*3.2 Write a program that reads a floating-point number and then displays 
the right-most digit of the integral part of the number.*/

#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int intPart = (int)num;
    int lastDigit = intPart % 10;
    printf("Right-most digit: %d\n", lastDigit);
    return 0;
}
