#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[100], outputFileName[100];
    char ch, prevCh = ' ';
    int extraSpaceFlag = 0;

    // Input file
    printf("Enter the input file name: ");
    scanf("%s", inputFileName);

    // Output file
    printf("Enter the output file name: ");
    scanf("%s", outputFileName);

    // Open the input file for reading
    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        printf("Error opening input file. Please enter a valid file name.\n");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL) {
        fclose(inputFile);
        printf("Error opening output file. Please enter a valid file name.\n");
        return 1;
    }

    // Copy content and squeeze extra spaces
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch == ' ') {
            if (prevCh != ' ') {
                fputc(ch, outputFile);
            }
            extraSpaceFlag = 1;
        } else {
            fputc(ch, outputFile);
            extraSpaceFlag = 0;
        }

        prevCh = ch;
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File copied and extra spaces squeezed.\n");

    return 0;
}