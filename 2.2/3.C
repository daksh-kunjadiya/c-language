#include<stdio.h>
#include<conio.h>
main()
{
	float b,h;
	clrscr();
	printf("enter the value of base=");
	scanf("%f",&b);
	printf("enter the value of height=");
	scanf("%f",&h);
	printf("area of triangle is=%f",b*h/2);
	getch();
}