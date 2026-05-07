#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d: \n", n);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    printf("Good Bye...\nSee you again...\n");
    return 0;
}