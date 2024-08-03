#include <stdio.h>

int main()
{
    FILE *file;
    char fileName[] = "example.txt";
    char ch;

    file = fopen(fileName, "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fputc('T', file);
    fputc('a', file);
    fputc('n', file);
    fputc('a', file);
    fputc('y', file);
    fclose(file);
    file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Contents of %s using fgetc:\n", fileName);
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(file);

    return 0;
}
