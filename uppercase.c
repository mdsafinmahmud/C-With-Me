#include <stdio.h>

int main() {
    char a;
    printf("Enter a charecter to check: ");
    scanf("%c",&a);
    printf("The value of character is %d\n ",a);
    if(a>=97 && a<=122)
    {
        printf("The character is lowercase.\n");
    }
    else{
        printf("The character is not lowercase.");
    }
    return 0;
}