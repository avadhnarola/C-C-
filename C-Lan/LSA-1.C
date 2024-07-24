#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();

	printf("\n Enter Number : ");
	scanf("%d",&num);

	while(num>0)
	{
		num=num/10;

	}

	printf("\n %d : ",num);


getch();
}
