#include <stdio.h>
#include <conio.h>

main()
{
       int number, a, b, n, sum;
       clrscr();
       printf("Enter a number: ");
       scanf("%d", &number);

       n = number;
       b = number % 10;

       while (n >= 10)
       {
              n /= 10;
       }
       a = n;

       sum = a + b;

       printf("Sum of first and last digit : %d", sum);
       getch();
}
