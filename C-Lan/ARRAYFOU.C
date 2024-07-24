#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],size,num,found;
	clrscr();

	printf("\n Enter Size : ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\n a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);

	}
	printf("\n Enter Number : ");
	scanf("%d",&num);

	for(i=0;i<size;i++)
	{
		if(num==a[i])
		{
		found=i;
		break;
		}

	}

	if(found==i)
		printf("\n Number Found");
	else
		printf("\n Number Not Found");




getch();
}