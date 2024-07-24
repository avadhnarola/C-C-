#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[4];
	clrscr();

	for(i=0;i<=4;i++)
	{
	printf("\n a[%d] = ",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
	printf("\n a[%d] = %d",i,a[i]);
	}




getch();
}