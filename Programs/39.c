#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch;
    long fileSize, i;
    printf("Enter the input file name: ");
    scanf("%s", inputFileName);
    printf("Enter the output file name: ");
    scanf("%s", outputFileName);
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Error opening input file. Please enter a valid file name.\n");
        return 1;
    }
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        fclose(inputFile);
        printf("Error opening output file. Please enter a valid file name.\n");
        return 1;
    }
    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);
    fseek(inputFile, 0, SEEK_SET);
    for (i = fileSize - 1; i >= 0; i--) {
        fseek(inputFile, i, SEEK_SET);
        ch = fgetc(inputFile);
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("Contents of '%s' written in reverse to '%s'.\n", inputFileName, outputFileName);
    return 0;
}
