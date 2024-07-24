#include<stdio.h>
#include<conio.h>
void main()
{
   long int sales;
   clrscr();

   printf("\n Enter Sales : ");
   scanf("%ld",&sales);

   if(sales>=100000)
   {
	printf(" Commission is 28%% = %ld",sales*28/100);
   }
   else if(sales<100000 && sales>80000)
   {
	printf("\n Commission is 22%% =%ld",sales*22/100);
   }
   else if(sales<80000 && sales>60000)
   {
	printf("\n Commission is 18%% =%ld",sales*18/100);
   }
   else if(sales<60000)
   {
	printf("\n Commission is 12%% =%ld",sales*12/100);
   }


getch();
}