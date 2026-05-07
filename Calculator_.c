 // Its a calculator to calculate 2 numbers
#include <stdio.h>

int main()
{
    int choice, a, b, sum1, sum2, sum3, sum4;
    printf("Enter two numbers for calculate: ");
    scanf("%d %d", &a, &b);
    printf("To sum press 1\nTo multiple press 2\nTo divide press 3\nTo difference 4\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        sum1 = a + b;
        printf("Your result  is: %d", sum1);
        break;
    case 2:
        sum2 =
            a * b;
        printf("Your result is: %d", sum2);
        break;
    case 3:
        sum3 =
            a / b;
        printf("Your result is: %d", sum3);
        break;
    case 4:
        sum4 = a - b;
        printf("Your result is: %d", sum4);
        break;
    default:
        printf("You didn't enter many numbers.");
        break;
    }
    return 0;
}