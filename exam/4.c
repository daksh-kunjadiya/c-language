#include <stdio.h>

int Diviaible(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (Diviaible(num))
    {
        printf("The given number is divisible by both 3 & 5.\n");
    }
    else
    {
        printf("The given numberber is not divisible by both 3 & 5\n");
    }

    return 0;
}