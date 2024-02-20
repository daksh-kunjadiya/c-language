#include<stdio.h>
#include<conio.h>
main()
{
	int s=0,n;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	while(n>0)
	{
		s+=n%10;
		n/=10;
	}
	printf("magic number is\t:%d",s);
	getch();
}