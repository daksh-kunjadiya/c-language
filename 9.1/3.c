#include <stdio.h>
main()
{
    char name[100];
    printf("enter your name : ");
    scanf("%[^\n]", name);

    int i;
    for (i = 0; name[i] != NULL; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }
    printf("NAME : %s", name);
}
