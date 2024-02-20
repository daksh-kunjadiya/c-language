//print 1 to n using while loop
#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n;
	clrscr();
	printf("enter any number\t:");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\t",a);
		a++;
	}
	getch();
}
