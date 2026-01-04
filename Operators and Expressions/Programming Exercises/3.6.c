/* 3.6 The straight-line method of computing the yearly depreciation of the value of an item is given by
 Depreciation = (Purchase Price - Salvage Value) / Years of Service
 Write a program to determine the salvage value of an item when the purchase price,
 years of service, and the annual depreciation are given. */

#include <stdio.h>

int main()
{
    float purchasePrice, years, annualDepreciation, salvageValue;
    printf("Enter purchase price: ");
    scanf("%f", &purchasePrice);6
    printf("Enter years of service: ");
    scanf("%f", &years);
    printf("Enter annual depreciation: ");
    scanf("%f", &annualDepreciation);

    salvageValue = purchasePrice - (annualDepreciation * years);
    printf("Salvage Value = %.2f\n", salvageValue);
    return 0;
}
