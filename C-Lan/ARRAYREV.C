#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,size,s=0;
	clrscr();

	printf("\n Enter Size : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{

	printf("\n a[%d] = ",i);
	scanf("%d",&a[i]);
	}
	for(i=size-1;i>=0;i--)
	printf("\n a[%d] = %d",s++,a[i]);


getch();
}