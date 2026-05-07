
#include <stdio.h>
int main()
{
    float radius, height, volume, pi = 3.1416;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = pi * radius * radius * height;
    printf("The volume of the cylinder is: %.2f\n", volume);
    return 0;
}