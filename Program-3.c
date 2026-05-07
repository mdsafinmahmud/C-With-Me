#include <stdio.h>

int main()
{
    int n, term = 5;
    long long sm = 0;
    printf("Enter N:");
    scanf("%d", &n);
    for (term; term <= n; term *= 2)
    {
        sm += term * term * term;
    }
    printf("Sum of this series: %lld", sm);
    return 0;
}