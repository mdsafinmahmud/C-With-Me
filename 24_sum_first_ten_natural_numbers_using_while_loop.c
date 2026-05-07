#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    // Using a while loop to calculate the sum of the first ten natural numbers
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of the first ten natural numbers is=%d\n", sum);
    return 0;
}