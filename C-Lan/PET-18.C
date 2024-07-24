#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=15;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d ",n);
		n--;
		}
	printf("\n");
	}


getch();
}