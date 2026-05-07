#include <stdio.h>
int main()
{
    int celsius, farhenhite;
    float convert;
    printf("Enter the temperature in Celsius: \n");
    scanf("%d", &celsius);
    convert = (celsius * 9 / 5) + 32;
    printf("The Temperature in Farhenhite is : %.2f\n", convert);
    return 0;
}
