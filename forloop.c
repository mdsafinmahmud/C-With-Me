#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i =2 ; i <= n; i+=2)
    {
        printf("The numbers: %d\n", i);
    }
    return 0;
}