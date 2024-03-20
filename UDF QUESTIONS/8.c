#include <stdio.h>

int divisible(int num)
{
    return (num % 3 == 0 && num % 5 == 0);
}

int main()
{
    int i;

    printf("Numbers divisible by 3 and 5 from 1 to 100 are:\n");
    for (i = 1; i <= 100; i++)
    {
        if (divisible(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
