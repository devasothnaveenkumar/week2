#include <stdio.h>

int main() 
{
    float basicsalary, da, hra, totalsalary;
    float dapercentage = 0.20; 
    float hrapercentage = 0.10;

    printf("Enter the basic salary: ");
    scanf("%f", &basicsalary);

    da = basicsalary * dapercentage;
    hra = basicsalary * hrapercentage;
    totalsalary = basicsalary + da + hra;


    printf("Total Salary = %f\n", totalsalary);

    return 0;
}
