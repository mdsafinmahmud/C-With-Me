#include <stdio.h>

int main()
{
    int i, n;
    long long fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is : %d\n ", n, fact);
    return 0;
}