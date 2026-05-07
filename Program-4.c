#include <stdio.h>

int main()
{
    int n, term = 3, dfrnc = 4;
    int sm = 0;
    printf("Enter N:");
    scanf("%d", &n);
    for (; term <= n; dfrnc++)
    {
        sm += term;
        term += dfrnc;
    }
    printf("Sum the series: %d ", sm);

    return 0;
}