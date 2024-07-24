#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();

	printf("\n Enter A : ");
	scanf("%d",&a);

	printf("\n Enter B : ");
	scanf("%d",&b);

	if(a>b)
		printf("\n A is Max");
	else
		printf("\n B is Max");

getch();
}