// 3.10 For a certain electrical circuit with an inductance L and resistance R, 
//the damped natural frequency is given by
// Frequency = √((1 / LC) - (R² / 4C²))
// It is desired to study the variation of this frequency with C (capacitance).
// Write a program to calculate the frequency for different values of C starting from 
//0.01 to 0.1 in steps of 0.01.

#include <stdio.h>
#include <math.h>

int main()
{
    float L, R, C, freq;
    printf("Enter inductance (L): ");
    scanf("%f", &L);
    printf("Enter resistance (R): ");
    scanf("%f", &R);

    printf("C\tFrequency\n");
    for (C = 0.01; C <= 0.1; C += 0.01)
    {
        float term = (1 / (L * C)) - (R * R) / (4 * C * C);
        if (term > 0)
            freq = sqrt(term);
        else
            freq = 0; // imaginary frequency not handled
        printf("%.2f\t%.4f\n", C, freq);
    }

    return 0;
}
