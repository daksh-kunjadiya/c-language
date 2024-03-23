#include <stdio.h>
#include <conio.h>

main()
{
	int a, b = 1;
	clrscr();
	printf("Enter the number : ");
	scanf("%d", &a);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	printf("%d * %d = %d\n", a, b++, a * b);
	getch();
}