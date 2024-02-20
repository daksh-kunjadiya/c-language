//print odd number n to 1 using while loop
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter any number\t:");
	scanf("%d",&n);
	while(n>=1)
	{
	if(n%2==1)
		{
		printf("%d\t",n);
		}
		n--;
	}
	getch();
}
