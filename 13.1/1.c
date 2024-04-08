#include <stdio.h>

int main()
{
    FILE *sourceFile, *targetFile;
    char sourceFileName[100], targetFileName[100];
    char c;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    printf("Enter the target file name: ");
    scanf("%s", targetFileName);

    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL)
    {
        fclose(sourceFile);
        printf("Error opening target file.\n");
        return 1;
    }

    while ((c = fgetc(sourceFile)) != EOF)
    {
        fputc(c, targetFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
