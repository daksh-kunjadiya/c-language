#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("divisible_numbers.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);
    printf("Numbers successfully written to file.\n");

    return 0;
}
