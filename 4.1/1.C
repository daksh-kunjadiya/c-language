#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	clrscr();
	printf("enter any value:");
	scanf("%d", &a);

	printf("increment :%d\n", ++a);
	printf("decrement :%d\n", --a);
	getch();
}