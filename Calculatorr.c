#include <stdio.h>

int main()
{
    int a, b, choice;
    float result;
    char name;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (1)
    {
        printf("Chose an option.\n");
        printf("1. Sum\n");
        printf("2. Multiply\n");
        printf("3. Divide\n");
        printf("4. Diffrence\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            result = a + b;
            printf("Result= %.2f\n",result);
            break;

        case 2:
            result = a * b;
            printf("Result= %.2f\n",result);
            break;
        case 3:
            if (b != 0)
            {
                result = (float)a / b;
                printf("Result= %.2f\n", result);
            }
            else
            {
                printf("b can't = 0");
            }
            break;
        case 4:
            result = a - b;
            printf("Rsult= %.2f\n", result);
            break;
        case 5:
            printf("Exiting Calculator... Good Bye! %c See you soon... :) ");
            return 0;
        default:
            printf("Invalid choice.Thanks!\n ");
        }
    }
        return 0;
    }