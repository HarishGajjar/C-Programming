// 3.13 Given three values, write a program to read three values from keyboard and 
//print out the largest of them without using if statement.

#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b ? a : b);
    max = (max > c ? max : c);

    printf("Largest = %d\n", max);
    return 0;
}
