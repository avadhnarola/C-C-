#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,size,sum=0;
	clrscr();

	printf("\n Enter Size : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{

	printf("\n a[%d] = ",i);
	scanf("%d",&a[i]);
	sum = sum + a[i];
	}
	printf("\n Sum is : %d",sum);

	for(i=0;i<size;i++)
	printf("\n a[%d] = %d",i,a[i]);


getch();
}