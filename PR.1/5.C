#include<stdio.h>
#include<conio.h>

void printTable(int n, int times)
{
	if (times > 10)
	return;
	printf("%d x %d = %d\n", n, times, n * times);
	printTable(n, times + 1);
}
main()
{
	int number;
	clrscr();
	printf("Enter the number : ");
	scanf("%d", &number);
	printTable(number, 1);
	getch();
}