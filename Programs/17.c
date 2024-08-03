#include <stdio.h>

int main() 
{
    char str[100];
    char *ptr = str;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", ptr);
    return 0; 
}