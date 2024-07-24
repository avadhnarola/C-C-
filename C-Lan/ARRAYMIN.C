#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,min,size;
	clrscr();

	printf("\n Enter Size : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\n a[%d] = ",i);
		scanf("%d",&a[i]);

	}
	min=a[0];
	for(i=1;i<size;i++)
	{
		if(a[i]<min)
		min=a[i];

	}
	printf("\n Min : %d ",min);


getch();
}