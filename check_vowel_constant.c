#include <stdio.h>
int main()
{

    char ch;
    for (;;)
    {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'o' || ch == 'U')
        {
            printf("%c is a Vowel\n", ch);
        }
        else
        {
            printf("%c is a Constant\n", ch);
        }
    }
    return 0;
}
