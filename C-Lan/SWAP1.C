#include<stdio.h>
#include<conio.h>

void main()
{
 /*  int a=10;
   int b=20;
   clrscr();

   printf("\n Before Swapping");
   printf("\n\nA= %d ",a);
   printf("\nB= %d ",b);

a=a+b;
b=a-b;
a=a-b;

	printf("\n\n After Swapping ");
	printf("\n\nA= %d",a);
	printf("\nB= %d",b);
*/

	int a,b,c;
	clrscr();

	a=10;
	b=20;
   printf("\n Before Swapping");
   printf("\n\nA= %d ",a);
   printf("\nB= %d ",b);

c=a;
a=b;
b=c;

	printf("\n\n After Swapping ");
	printf("\n\nA= %d",a);
	printf("\nB= %d",b);
getch();
}