#include <stdio.h>
#include <string.h>
int main()
{
    char email[30], password[30], Email[30], Password[30];

    printf("Create Your Email :");
    gets(email);
    printf("Create Your Password :");
    gets(password);

    printf("e-mail craeted\n");

    printf("Enter Your Email :");
    gets(Email);
    printf("Enter Your Password :");
    gets(Password);

    if ((strcmp(email, Email) == 0) && (strcmp(password, Password) == 0))

        printf("Login Successful...\n");

    else

        printf("Login Failed. Invalid Credentials.\n");
}