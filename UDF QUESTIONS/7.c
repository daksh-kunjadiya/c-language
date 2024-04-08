#include <stdio.h>

int isMagicNumber(int num)
{
    int n = num, a, sum = 0, mul = 1;

    while (n > 0)
    {
        a = n % 10;
        sum += a;
        mul *= a;
        n /= 10;
    }

    return (sum == mul);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isMagicNumber(n))
    {
        printf("%d is a magic number\n", n);
    }
    else
    {
        printf("%d is not a magic number\n", n);
    }

    return 0;
}
