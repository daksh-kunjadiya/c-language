#include <stdio.h>
#include <conio.h>
main()
{
	int n, num, a, sum = 0, mul = 1;
	clrscr();
	printf("Enter anber: ");
	scanf("%d", &n);

	num = n;

	while (n > 0)
	{
		a = n % 10;
		sum += a;
		mul *= a;
		n /= 10;
	}

	if (sum == mul)
	{
		printf("%d is a magic number\n", num);
	}
	else
	{
		printf("%d is not a magic number\n", num);
	}
	getch();
}
