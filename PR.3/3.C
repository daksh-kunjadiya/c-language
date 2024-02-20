#include<stdio.h>
#include<conio.h>
main()
{
       int f,l,n,sum;
       clrscr();
       printf("enter any number\t:");
       scanf("%d",&n);
       f=n;
       while(f>=10){
		f/=10;
       }
       l=n%10;
       sum=f+l;
       printf("sum:%d\n",sum);
       getch();
}