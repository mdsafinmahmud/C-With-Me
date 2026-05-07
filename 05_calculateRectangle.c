#include <stdio.h>
int main()
{
    int length, width, area;
    printf("Enter the length and width of the rectangle: \n");
    scanf("%d %d", &length, &width);
    // calculate the area of the rectangle
    area = length * width;
    printf("The area of the rectangle with length %d and width %d is %d\n", length, width, area);
    return 0;
}