#include <stdio.h>

int strlen(char *str)
{
    int len = 0;

    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

int main()
{
    char str[100];

    printf("Enter a name : ");
    scanf("%[^\n]s", str);

    int len = strlen(str);

    printf("length : %d\n", len);

    return 0;
}
