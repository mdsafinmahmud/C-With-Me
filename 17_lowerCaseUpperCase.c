#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character '%c' is in lower case.\n", ch);
    }
    else
    {
        printf("The character '%c' is in upper case.\n", ch);
    }

    return 0;
}