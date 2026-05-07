#include <stdio.h>
int main()
{
    int p, t;
    float r, si;

    printf("Enter the principal amount : \n");
    scanf("%d", &p);

    printf("Enter the rate of interest: \n");
    scanf("%f", &r); // float input

    printf("Enter the time in years: \n");
    scanf("%d", &t); // int input

    si = (p * r * t) / 100.0;

    printf("The Simple Interest is : %.2f\n", si);
    return 0;
}
