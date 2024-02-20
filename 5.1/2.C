#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    clrscr();
    printf("Enter any number: ");
    scanf("%d", &a);

	if (a<0)
	{
		printf("This number is Negative\n");
	}
	else if (a==0)
	{
		printf("This number is Neutral\n");
	}
	else
	{
		printf("This number is Positive\n");
	}

	getch();
}
