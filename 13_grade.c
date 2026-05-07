#include <stdio.h>
int main()
{
    int num;
    printf("Enter your exam score:");
    scanf("%d", &num);
    if (num <= 50)

    {
        printf("Your grade is F.\n");
    }
    else if (num > 100 || num < 0)
    {
        printf(" BENCHOD .\n");
    }
    else if (num >= 50)
    {
        printf("Your grade is E.\n");
    }
    else if (num >= 60)
        printf(" Your grade is D.\n");
    else if (num >= 70)

    {
        printf("Your grade is C.\n");
    }
    else if (num > 80)
    {
        printf("Your grade is B.\n");
    }
    else if (num > 90)
    {
        printf("Your grade is A.\n");
    }
    return 0;
}