#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	clrscr();

	printf("\n Enter A : ");
	scanf("%d",&a);

	printf("\n Enter B : ");
	scanf("%d",&b);

	printf("\n Enter C : ");
	scanf("%d",&c);

	printf("\n Enter D : ");
	scanf("%d",&d);



	if(a>b)
	{
	   if(a>c)
	   {
	       if(a>d)
	       {
		printf("\n A is Max");
	       }
	       else
	       {
		printf("\n D is Max");
	       }

	   }
	   else
	   {
	       if(c>d)
	       {
		printf("\n C is Max");

	       }
	       else
	       {
		printf("\n D is Max");
	       }


	   }


	}
	else
	{
	   if(b>c)
	   {
		if(b>d)
		{
		  printf("\n B is Big");
		}
		else
		{
		  printf("\n D is Big");
		}
	   }
	   else
	   {
	      if(c>d)
	      {
	       printf("\n C is Max");

	      }
	      else
	      {
	       printf("\n D is Max");

	      }

	   }




	}


getch();
}