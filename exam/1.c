#include <stdio.h>

main()
{
       int num, a, b, n, sum;
       printf("Enter a number: ");
       scanf("%d", &num);

       n = num;
       b = num % 10;

       while (n >= 10)
       {
              n /= 10;
       }
       a = n;

       sum = a + b;

       printf("Sum of first and last digit : %d", sum);
}