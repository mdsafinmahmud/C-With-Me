#include <stdio.h>

int main()
{
    int a;
    while (1)
    {
        printf("Enter number 1 to 4 (0 to exit) : ");
        scanf("%d", &a);

        if (a == 0)
        {
            printf("Exiting Program... Good bye! See you soon :)");
        }

        switch (a)
        {
        case 1:
            printf("You are a good boy.");
            break;
        case 2:
            printf("You are a chuchu boy");
            break;
        case 3:
            printf("You are a lazy boy");
            break;
        case 4:
            printf("You are a naughty boy");
            break;
            return 0;
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}