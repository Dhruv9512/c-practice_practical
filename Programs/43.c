#include <stdio.h>

int main()
{
    FILE *file;
    char fileName[] = "File1";
    file = fopen(fileName, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(file, "-----------------------------------------------------\n");
    fprintf(file, "|\tCustomer No. |\tAccount Type |\tBalance\n");
    fprintf(file, "-----------------------------------------------------\n");
    fprintf(file, "|\t101          |\tSavings      |\t2000\n");
    fprintf(file, "|\t102          |\tCurrent      |\t5000\n");
    fprintf(file, "|\t103          |\tSavings      |\t3000\n");
    fprintf(file, "|\t104          |\tCurrent      |\t10000\n");
    fclose(file);
    printf("Contents inserted into the file '%s'.\n", fileName);
    return 0;
}
