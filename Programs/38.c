#include <stdio.h>

int main()
{
    FILE *outputFile;
    int i;
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    for (i = 1; i <= 100; i++)
    {
        fprintf(outputFile, "%d\n", i);
    }
    fclose(outputFile);
    printf("Numbers 1 to 100 have been written to the file 'output.txt'.\n");
    return 0;
}
