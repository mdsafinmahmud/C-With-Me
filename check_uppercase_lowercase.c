#include <stdio.h>
int main()
{
    char ch;
    for (;;)
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        if (ch == '/')
            break;
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("%c is an Uppercase Character\n");
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("%c is a Lowercase Character\n");
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("%c is a Digit\n", ch);
        }
        else
        {
            printf("Other Character\n");
        }
    }
    return 0;
}