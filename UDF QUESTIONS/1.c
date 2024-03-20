#include <stdio.h>

void reversenumber(int num)
{

    if (num == 0)
        return;

    printf("%d", num % 10);

    reversenumber(num / 10);
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Reverse of %d is ", number);
    reversenumber(number);

    return 0;
}
