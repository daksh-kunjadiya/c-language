#include <stdio.h>
#include <conio.h>
#define pi 3.14
main()
{
	float r;
	clrscr();
	printf("enter the value of radius:");
	scanf("%f", &r);
	printf("area of circle:%.2f", pi * r * r);
	getch();
}