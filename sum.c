#include <stdio.h>
// ইউজারের দেওয়া একটি সংখ্যা পর্যন্ত সব সংখ্যা যোগ করে যোগফল বের করো।
int main()
{
    int i, n, sum = 0,sum1=0,sum3=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
        sum1 *=i;
        sum3 -=i;
    }
    printf("%d\n", sum);
    printf("%d\n", sum1);
    printf("%d\n", sum3);

    return 0;
}