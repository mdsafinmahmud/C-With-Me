// Quick Quiz : Write a program to find grade of a student given his marks based on below : 90 – 100 = > A
//  80 – 90 = > B
//   70 – 80 = > C
//    60 – 70= > D
//    50 – 60 = > E
//    <50 => F

#include <stdio.h>

int main()
{
    int num;
    printf("Enter your exam marks to check your grade:  ");
    scanf("%d", &num);
    if (num <= 50)
    {
        printf("F");
    }
    else if (num >= 50 && num <= 60)
    {
        printf("E");
    }
    else if (num >= 60 && num <= 70)
    {
        printf("D");
    }
    else if (num >= 70 && num <= 80)
    {
        printf("C");
    }
    else if (num >= 80 && num <= 90)
    {
        printf("B");
    }
    else if (num >= 90 && num <= 100)
    {
        printf("A");
    }
    return 0;
}