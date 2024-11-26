#include <stdio.h>

int main() 
{
    int units;
    float charge = 3.0, surcharge = 50.0, total;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    total= (units * charge) + surcharge;

    printf("Total = %f\n", total);

    return 0;
}

