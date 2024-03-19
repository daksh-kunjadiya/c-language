#include <stdio.h>
main()
{
    char name[100];
    printf("enter your name : ");
    scanf("%[^\n]", name);

    int i;
    for (i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }
    printf("\nNAME : %s", name);
}
