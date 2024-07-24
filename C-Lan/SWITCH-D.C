#include<stdio.h>
#include<conio.h>

void main()
{
  int day;
  clrscr();

   printf("\n-------------------");
   printf("\n 1.Sunday");
   printf("\n 2.Monday");
   printf("\n 3.Tuesday");
   printf("\n 4.Wednesday");
   printf("\n 5.Thursday");
   printf("\n 6.Friday");
   printf("\n 7.Saturday");
   printf("\n-------------------");


   printf("\n\n Enter a Number of Day : ");
   scanf("%d",&day);

	switch(day)
	{
	   case 1:
		printf("\n Sunday ");
		break;

	   case 2:
		printf("\n Monday");
		break;

	   case 3:
		printf("\n Thuesday");
		break;

	   case 4:
		printf("\n Wednesday");
		break;


	   case 5:
		printf("\n Thursday ");
		break;

	   case 6:
		printf("\n Friday");
		break;

	   case 7:
		printf("\n Saturday ");
		break;


	   default:
		printf("\n\n Invalide Day of Number");
		break;

	}



getch();
}
