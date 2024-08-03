#include <stdio.h>

int main()
{
    FILE *file1, *file2, *combinedFile;
    char fileName1[100], fileName2[100], combinedFileName[100];
    char line[1000];
    int lineNumber = 1;
    printf("Enter the first file name: ");
    scanf("%s", fileName1);
    printf("Enter the second file name: ");
    scanf("%s", fileName2);
    printf("Enter the combined file name: ");
    scanf("%s", combinedFileName);
    file1 = fopen(fileName1, "r");
    file2 = fopen(fileName2, "r");
    combinedFile = fopen(combinedFileName, "w");
    if (file1 == NULL || file2 == NULL || combinedFile == NULL)
    {
        printf("Error opening files. Please enter valid file names.\n");
        return 1;
    }
    while (fgets(line, sizeof(line), file1) != NULL)
    {
        fprintf(combinedFile, "%d: %s", lineNumber++, line);
    }
    lineNumber = 1;

    while (fgets(line, sizeof(line), file2) != NULL)
    {
        fprintf(combinedFile, "%d: %s", lineNumber++, line);
    }
    printf("Contents of both files combined and line numbers added to %s\n", combinedFileName);
    fclose(file1);
    fclose(file2);
    fclose(combinedFile);
    return 0;
}
