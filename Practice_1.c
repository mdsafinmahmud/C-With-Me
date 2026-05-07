#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter two numbers for sum: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);

    int c, d, multiple;
    printf("Enter two numbers for multiple: ");
    scanf("%d %d", &c, &d);
    multiple = c * d;
    printf("Multiple: %d\n", multiple);

    int l, w, area;
    printf("Enter Rectangle Length & Width: ");
    scanf("%d %d", &l, &w);
    area = l * w;
    printf("Rectanlge area is : %d\n ", area);

    int land, hight;
    float triarea;
    printf("Enter Triangle Land & Hight: ");
    scanf("%d %d", &land, &hight);
    triarea = 0.5 * land * hight;
    printf("Triangle area is : %f", triarea);

    int p, t;
    float r, si;
    printf("Enter the principle amount:\n");
    scanf("%d", &p);
    printf("Enter the ratio:\n ");
    scanf("%f", &r);
    printf("Enter the time in year:\n");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("The Simple Interst: %.2f\n", si);

    int num;
    printf("Enter the number to check if it's divisible by 97:\n ");
    scanf("%d", &num);
    if (num % 97 == 0)
        printf("It's divisible by 97");
    else
        printf("It's not divisible by 97");

    return 0;
}