#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,c;
   clrscr();                 // A=B=C = 25 ; " Creative " else " Multimedia"

	   printf("\n Enter A :");
	   scanf("%d",&a);

	   printf("\n Enter B :");
	   scanf("%d",&b);

	   printf("\n Enter C :");
	   scanf("%d",&c);

	   if(a==25)
	   {
		if(b==25)
		{
		   printf("\n Creative");

		}
		else
		{
		  printf("\n Multimedia");

		}



	   }
	   else
	   {
	      if(c==25)
	      {
		printf("\n Creative");

	      }
	      else
	      {
		printf("\n multimedia");
	      }


	   }

getch();
}