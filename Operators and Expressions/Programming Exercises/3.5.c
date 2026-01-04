// 3.5 Given an integer number, write a program that displays the number as follows:
// First line   : all digits
// Second line  : all except first digit
// Third line   : all except first two digits
// .......
// Last line    : The last digit

#include <stdio.h>
#include <string.h>

int main() {
    char num[20];
    printf("Enter an integer: ");
    scanf("%s", num);
    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        printf("%s\n", &num[i]);
    }
    return 0;
}
