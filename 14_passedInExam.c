#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, score, percent, total;
    printf("Enter your score in subject 1\t:");
    scanf("%f", &sub1);
    printf("Enter your score in subject 2\t:");
    scanf("%f", &sub2);
    printf("Enter your score in subject 3\t:");
    scanf("%f", &sub3);
    total = sub1 + sub2 + sub3;
    percent = (total / 300) * 100;
    if (percent >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("You have passed the exam with a percentage of %.2f%%.\n", percent);
    }
    else
    {
        printf("You have failed the exam.\n");
    }

    return 0;
}