#include<stdio.h>
#include<conio.h>
main()
{
	int x, y, result;
	clrscr();
	printf("Enter the value for x: ");
	scanf("%d", &x);
	printf("Enter the value for y: ");
	scanf("%d", &y);

	result = (x + y) * (x + y);

	printf("(%d + %d)^2 = %d\n", x, y, result);

    getch();
}
