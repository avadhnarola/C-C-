#include<stdio.h>
#include<conio.h>
void main()
{
	int num,orn,rev=0,rem=0;
	clrscr();

	printf("\n Enter Number : ");
	scanf("%d",&num);

orn=num;

	while(orn>0)
	{
		rem =orn % 10;
		rev =rem + rev * 10;
		orn =orn / 10;

	}
if(num==rev)
{
printf("\n %d =  Pelidrome Number ",num);
}
else
{
printf("\n %d = Not Pelidrome Number ",num);
}


getch();
}