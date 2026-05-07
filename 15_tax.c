#include <stdio.h>
int main()
{
    float tax = 0, income;

    printf("Enter your annual income: ");
    scanf("%f", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income >= 500000)

    {
        tax = (income - 250000) * 0.05;
    }

    else if (income <= 1000000)
    {
        tax = (2250000 * 0.3) + (income - 500000) * 0.2;
    }
    else
    {
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30;
    }
    printf("Your tax is %.2f\n", tax);

    return 0;
}