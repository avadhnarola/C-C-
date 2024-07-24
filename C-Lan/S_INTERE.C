#include<stdio.h>
#include<conio.h>

void main()
{
	int p,n;
	float r,interest;
	clrscr();

	printf("\n Enter Amount :");
	scanf("%d",&p);

	printf("\n Enter Time Period :");
	scanf("%d",&n);

	printf("\n Enter Rate :");
	scanf("%f",&r);

interest=p*r*n/100;

	printf("\n Interest Is : %.2f",interest);


getch();
}