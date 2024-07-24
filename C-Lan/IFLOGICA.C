#include<stdio.h>
#include<conio.h>

// Using Logical Operator
void main()
{
   int a,b,c,d,e;
   clrscr();

	   printf("\n Enter A :");
	   scanf("%d",&a);

	   printf("\n Enter B :");
	   scanf("%d",&b);

	   printf("\n Enter C :");
	   scanf("%d",&c);

	   printf("\n Enter D :");
	   scanf("%d",&d);

	   printf("\n Enter E :");
	   scanf("%d",&e);

	   if(a>b && a>c && a>d && a>e)
	   {
	     printf("\n A is Max");
	   }
	   else if(b>c && b>d && b>e)
	   {
	     printf("\n B is Max");
	   }
	   else if(c>d && c>e)
	   {
	     printf("\n C is Max ");

	   }
	   else if(d>e)
	   {
	     printf("\n D is Max");
	   }

	   else
	   {
	     printf("\n E is Max");
	   }




getch();
}