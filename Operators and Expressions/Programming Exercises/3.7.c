// 3.7 Write a program that will read a real number from the keyboard and print the following output in one line:
// Smallest integer not less than the number
// The given number
// Largest integer not greater than the number

#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a real number: ");
    scanf("%f", &num);

    printf("Ceil: %.0f, Original: %.2f, Floor: %.0f\n", ceil(num), num, floor(num));
    return 0;
}
