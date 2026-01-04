// 3.8 The total distance travelled by a vehicle in t seconds is given by
// distance = ut + (at²)/2
// Where u is the initial velocity (metres per second), a is the acceleration (metres per second²).
// Write a program to evaluate the distance travelled at regular intervals of time, given the values of u and a.
// The program should provide the flexibility to the user to select his own time intervals and repeat the calculations for different values of u and a.

#include <stdio.h>

int main()
{
    float u, a, t, interval;
    int steps;

    do
    {
        printf("Enter initial velocity (u): ");
        scanf("%f", &u);
        printf("Enter acceleration (a): ");
        scanf("%f", &a);
        printf("Enter number of intervals: ");
        scanf("%d", &steps);
        printf("Enter time interval (in seconds): ");
        scanf("%f", &interval);

        for (int i = 1; i <= steps; i++)
        {
            t = i * interval;
            float distance = u * t + (a * t * t) / 2;
            printf("Time: %.2f sec → Distance: %.2f m\n", t, distance);
        }

        printf("Repeat with new values? (1 = Yes, 0 = No): ");
        scanf("%d", &steps); // reuse variable for decision
    } while (steps == 1);

    return 0;
}
