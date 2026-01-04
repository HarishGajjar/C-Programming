// 3.14 Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printf("%d is %sa multiple of %d\n", m, (m % n == 0 ? "" : "not "), n);
    return 0;
}
