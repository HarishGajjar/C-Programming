#include <stdio.h>  // Includes the standard input/output library for printf()

int main()
{
    double speed = 88.456789;  // Declare a double variable and assign a precise value

    // Print the value of 'speed' with 6 digits after the decimal point
    printf("Recorded speed: %.6lf km/h\n", speed);

    return 0;  // Return 0 to indicate successful program execution
}
