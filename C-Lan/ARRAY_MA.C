#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,max;
	clrscr();

	for(i=0;i<=4;i++)
	{
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);

	}
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];

	}
	printf("\n Max : %d ",max);


getch();
}