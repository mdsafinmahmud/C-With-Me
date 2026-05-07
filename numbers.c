#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 4 number: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greter than all numbers.",a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greater than all numbers.",b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("%d is the greter than all numbers.",c);
    }
    else if (d > b && d > a && d > c)
    {
        printf("%d is the greter than all numbers.",d);
    }

    return 0;
}