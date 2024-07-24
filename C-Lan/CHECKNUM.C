#include<stdio.h>
#include<conio.h>

void main()
{
   int a;
   clrscr();                // Enter A ; Positive/Negative/Zero

	   printf("\n Enter A :");
	   scanf("%d",&a);

	   if(a>0)
	   {
		printf("\n %d is Positive",a);

	   }
	   else if(a<0)
	   {
		printf("\n %d is Negative",a);

	   }
	   else
	   {
		printf("\n %d is Zero ",a);
	   }


getch();
}