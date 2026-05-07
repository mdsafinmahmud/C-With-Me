#include <stdio.h>
int main()
{
    float radius, area, pi;
    pi = 3.1416;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}