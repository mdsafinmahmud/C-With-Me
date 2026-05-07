#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
            printf("%d\n", i);
        i++; 
        // i++ → i is increased by 1 
        // i -- → i is decreased by 1
    }

    return 0;
}