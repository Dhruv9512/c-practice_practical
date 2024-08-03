#include <stdio.h>

int main()
{
    FILE *file;
    char fileName[100];
    char ch;
    int lineCount = 0, wordCount = 0, charCount = 0, isWord = 0;
    printf("Enter the file name: ");
    scanf("%s", fileName);
    file = fopen(fileName, "r");
    if (file == NULL)
    {
        printf("Error opening file. Please enter a valid file name.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        charCount++;
        if (ch == '\n')
        {
            lineCount++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            isWord = 0;
        }
        else if (isWord == 0)
        {
            isWord = 1;
            wordCount++;
        }
    }
    fclose(file);
    printf("Lines: %d\n", lineCount);
    printf("Words: %d\n", wordCount);
    printf("Characters: %d\n", charCount);
    return 0;
}
