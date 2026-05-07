#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, total, percent;
    printf("Enter your score in 1st Subject:  ");
    scanf("%f", &sub1);
    printf("Enter your score in 2nd Subject:  ");
    scanf("%f", &sub2);
    printf("Enter your score in 3rd Subject:  ");
    scanf("%f", &sub3);
    total = sub1 + sub2 + sub3;
    percent = (total / 100) * 100;
    if (percent >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("You have Passed the exam with a percentage of %.2f%%\n", percent);
    }
    else
    {
        printf("You have failed the Exam.\n");
    }
    return 0;
}