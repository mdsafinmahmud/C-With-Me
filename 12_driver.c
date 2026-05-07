#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age to varify if you are eligible to driving license: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to apply for a driving license.\n");
    }
    else
    {
        printf("You are not  eligible to  apply for a driving license.\n");
    }
    return 0;
}
