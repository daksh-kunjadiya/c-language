#include <stdio.h>

int main()
{
    FILE *even_file, *odd_file;
    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL)
    {
        printf("Unable to create files.\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(even_file, "%d, ", i);
        }
        else
        {
            fprintf(odd_file, "%d, ", i);
        }
    }

    fclose(even_file);
    fclose(odd_file);
    printf("Numbers successfully written to files.\n");

    return 0;
}
