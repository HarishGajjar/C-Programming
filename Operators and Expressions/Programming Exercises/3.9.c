// 3.9 In inventory management, the Economic Order Quantity for a single item is given by
// EOQ = √((2 × demand rate × setup costs) / holding cost per item per unit time)
// and the optimal Time Between Orders
// TBO = √((2 × setup costs) / (demand rate × holding cost per item per unit time))
// Write a program to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per order), and the holding cost (per item per unit time).

#include <stdio.h>
#include <math.h>

int main()
{
    float D, S, H, EOQ, TBO;
    printf("Enter demand rate (D): ");
    scanf("%f", &D);
    printf("Enter setup cost per order (S): ");
    scanf("%f", &S);
    printf("Enter holding cost per item per unit time (H): ");
    scanf("%f", &H);

    EOQ = sqrt((2 * D * S) / H);
    TBO = sqrt((2 * S) / (D * H));

    printf("EOQ = %.2f units\n", EOQ);
    printf("TBO = %.2f time units\n", TBO);
    return 0;
}
