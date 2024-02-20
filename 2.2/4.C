#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t;
	clrscr();
	printf("enter the value of principal balance=");
	scanf("%f",&p);
	printf("enter the value of interest rate=");
	scanf("%f",&r);
	printf("enter the time=");
	scanf("%f",&t);
	printf("simpal interest=%f",p*r*t/100);
	getch();
}