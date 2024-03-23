#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c;
	clrscr();
	printf("Enter value for a: ");
	scanf("%d", &a);
	printf("Enter value for b: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("\nAfter swapping:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	getch();
}
