#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Enter any character:");
	scanf("%c",&ch);

	if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("This character is vowel\n");
	}
	else
	{
		printf("This character is consonant\n");
	}

	getch();
}
