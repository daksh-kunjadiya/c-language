//print leap year between two given number using while loop
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter any number\t:");
	scanf("%d",&a);
	printf("enter any number\t:");
	scanf("%d",&b);

	while(a<=b)
	{
	if(a%4==0)
		{
		printf("%d\t",a);
		}
		a++;
	}
	getch();
}
