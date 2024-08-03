#include <stdio.h>

int main()
{
    FILE *file;
    char fileName[100];

    printf("Enter the file name: ");
    scanf("%s", fileName);

    file = fopen(fileName, "rb");

    if (file == NULL)
    {
        printf("Error opening file. Please enter a valid file name.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fclose(file);

    printf("Size of the file: %ld bytes\n", size);

    return 0;
}
