#include <stdio.h>
#include <ctype.h>

int main() {
    char fname[100];

    printf("Enter the file name: ");
    scanf("%s", fname);

    FILE *file = fopen(fname, "r");

    if (file == NULL) {
        printf("Error opening file. Please enter a valid file name.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(toupper(ch));
    }

    fclose(file);

    return 0;
}
