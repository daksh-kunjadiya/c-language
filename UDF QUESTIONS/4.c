#include <stdio.h>

void uppercase(char n)
{
    if (n > 'Z')
        return;
    printf("%c ", n);
    uppercase(n + 1);
}

void lowercase(char n)
{
    if (n > 'z')
        return;
    printf("%c ", n);
    lowercase(n + 1);
}

int main()
{
    printf("Uppercase Alphabets: ");
    uppercase('A');
    printf("\n");

    printf("Lowercase Alphabets: ");
    lowercase('a');
    printf("\n");

    return 0;
}
