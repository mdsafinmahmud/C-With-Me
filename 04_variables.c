#include <stdio.h>
int main()
{
    // int a = 5;
    // int b = 10;
    int a, b; 
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    // Calculate the sum of a and b
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}