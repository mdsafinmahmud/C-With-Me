#include <stdio.h>
int main()
{
    int i;
    printf("Printable ASCII characters: \n");
    for (i = 33; i <= 126; i++)
    {
        printf("%c=%d\n", i, i);
    }
    return 0;
}