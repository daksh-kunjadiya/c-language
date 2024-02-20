#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter number of a: ");
	scanf("%d",&a);
	printf("Enter number of b: ");
	scanf("%d",&b);

	if (a<b)
	{
	       printf("a is minimum");
	}
	else
	{
		printf("b is minimum");
	}
	getch();
}