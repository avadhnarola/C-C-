#include<stdio.h>
#include<conio.h>
void main()
{                                     // 36 big- even and 12 small - odd
	int num1,num2;
	clrscr();

	printf("\n Enter Number 1 : ");
	scanf("%d",&num1);

	printf("\n Enter Number 2 : ");
	scanf("%d",&num2);

	while(num1>num2)
	{      if(num2%2==0)
		{
		printf("\n Even No : %d",num2);
		}
		num2++;
	}
	while(num2>num1)
	{
	       if(num1%2==1)
	       {
		  printf("\n Odd No : %d",num1);
	       }
	       num1++;


	}

getch();
}