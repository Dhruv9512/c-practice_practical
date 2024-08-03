#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char fileName1[] = "File1";
    char fileName2[] = "File2";
    char buffer[100];

    // Open File1 for reading
    file1 = fopen(fileName1, "r");

    if (file1 == NULL) {
        printf("Error opening %s for reading.\n", fileName1);
        return 1;
    }

    // Open File2 for appending
    file2 = fopen(fileName2, "a");

    if (file2 == NULL) {
        fclose(file1);
        printf("Error opening %s for appending.\n", fileName2);
        return 1;
    }

    // Append contents of File1 to File2
    while (fgets(buffer, sizeof(buffer), file1) != NULL) {
        fputs(buffer, file2);
    }

    // Close both files
    fclose(file1);
    fclose(file2);

    // Display contents of File2 on screen
    file2 = fopen(fileName2, "r");

    if (file2 == NULL) {
        printf("Error opening %s for reading.\n", fileName2);
        return 1;
    }

    printf("Contents of %s:\n", fileName2);

    while (fgets(buffer, sizeof(buffer), file2) != NULL) {
        printf("%s", buffer);
    }

    fclose(file2);

    return 0;
}
