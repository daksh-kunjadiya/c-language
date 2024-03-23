#include <stdio.h>
#include <conio.h>
main()
{
	int a, n = 1;
	clrscr();
	printf("\n");
	for (a = 1; a <= 5; a++)
	{
		printf("%d\n", n);
		n = n * 10 + 1;
	}
	getch();
}