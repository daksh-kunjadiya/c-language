#include<stdio.h>
#include<conio.h>
main() {
	int a, b;
	clrscr();
	printf("Enter the first number A: ");
	scanf("%d", &a);
	printf("Enter the second number B: ");
	scanf("%d", &b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("\nswapping:\n");
	printf("A: %d\n", a);
	printf("B: %d\n", b);

	getch();
}
