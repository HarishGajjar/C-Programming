// 3.15 Write a program to read three values using scanf statement and print the following results:
// (a) Sum of the values
// (b) Average of the three values
// (c) Largest of the three
// (d) Smallest of the three
#include <stdio.h>

int main()
{
    int a, b, c, sum, max, min;
    float avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3.0;
    max = (a > b ? a : b);
    max = (max > c ? max : c);
    min = (a < b ? a : b);
    min = (min < c ? min : c);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
    return 0;
}
