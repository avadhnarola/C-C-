#include<stdio.h>
#include<conio.h>
void main()
{

	int i=1,n;
	clrscr();

	printf("\n Enter a Number : ");
	scanf("%d",&n);

	while(i<=10)
	{
		printf("\n %d X %d = %d ",n,i,n*i);
	   i++;


	}


getch();
}