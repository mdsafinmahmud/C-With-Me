#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check if it's divisible by 97:\n");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("The number %d is divisible by 97.\n", num);
    }
    else
    {
        printf("The number %d is not divisible by 97.\n");
    }

    return 0;
}