/* 3.4 Write a program that will obtain the length and width of a rectangle
from the user and compute its area and perimeter. */

#include <stdio.h>

int main() {
    float length, width;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    float area = length * width;
    float perimeter = 2 * (length + width);
    printf("Area = %.2f, Perimeter = %.2f\n", area, perimeter);
    return 0;
}
