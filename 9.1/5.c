#include <stdio.h>

main()
{
    char name[100];
    int FW, i = 0;
    printf("enter your name : ");
    scanf("%[^\n]", name);
    if (name[i] >= 'A' && name[i] <= 'Z')
    {
        name[i] += 32;
    }

    for (; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            FW = 1;
        }
        else if (FW)
        {
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                name[i] -= 32;
            }
            FW = 0;
        }
        else
        {
            if (name[i] >= 'A' && name[i] <= 'Z')
            {
                name[i] += 32;
            }
        }
    }
    printf("camelCase: %s\n", name);
}