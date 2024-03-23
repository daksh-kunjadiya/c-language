#include <stdio.h>

main()
{
    char password[50];
    int letter = 0, digit = 0, symbol = 0;
    int len = 0;
    printf("you only use this symbol :- ( @ # $ % & . )and password must be at least 6 characters\n");
    printf("Create your password: ");
    scanf("%s", password);

    for (int i = 0; password[i] != '\0'; i++)
    {
        len++;
        if ((password[i] >= 65 && password[i] <= 90) || (password[i] >= 97 && password[i] <= 122))
            letter = 1;
        else if (password[i] >= 48 && password[i] <= 57)
            digit = 1;
        else if ((password[i] >= 35 && password[i] <= 38) || (password[i] == 64 || 46))
            symbol = 1;
    }

    if (letter && digit && symbol && len >= 6)
        printf("Your password is Strong.\n");
    else
        printf("Your password is not Strong.\n");
}
