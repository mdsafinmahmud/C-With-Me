#include <stdio.h>

int main()
{
    int num;
    printf("Enter your exam score: ");
    scanf("%d", &num);
    if (num <= 30)
    {
        printf("Your grade is F");
    }
    else if (num > 30)
    {
        printf("Your grade is E");
    }
    else if (num >= 40)
    {
        printf("Your grade is D");
    }
    else if (num >= 50)
    {
        printf("Your grade is C");
    }
    else if (num >= 60)
    {
        printf("Your grade is B");
    }
    else if (num > 99)
    {
        printf("Your grade ic A+");
    }
    return 0;
}