// 3.12 Write a program to print the size of various data types in C.
// Hint: Use sizeof operator and correct format specifier (%zu for size_t)

#include <stdio.h>

int main()
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    return 0;
}
