#include <stdio.h>

int main()
{
    int n, trm = 1;
    double prdct = 1.0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (; trm <= n; trm *= 3)
    {
        prdct *= (1.0 / trm);
    }

    printf("Product of the series = %lf\n", prdct);

    return 0;
}