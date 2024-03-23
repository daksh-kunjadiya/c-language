#include <stdio.h>
#include <conio.h>
main()
{
	long int count = 0, n;
	clrscr();
	printf("enter any number\t:");
	scanf("%ld", &n);
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	printf("%ld\n", count);
	getch();
}