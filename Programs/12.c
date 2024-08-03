#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    char *ptr1 = str1;
    char *ptr2 = str2;

    while (*ptr1 != '\0') {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }


    *ptr2 = '\0';

    printf("Copied String: %s\n", str2);

    return 0;
}