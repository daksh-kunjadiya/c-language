#include <stdio.h>
#include <conio.h>
main()
{
	int a, b;
	clrscr();
	printf("Enter value for a: ");
	scanf("%d", &a);
	printf("Enter value for b: ");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	getch();
}
