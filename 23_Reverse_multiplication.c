#include <stdio.h>
int main()
{
    int n = 10;
    printf("Multiplication table %d in reverse order:\n", n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
