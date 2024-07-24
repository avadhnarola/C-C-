#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=2;i<=10;i+=2)
	{
		 for(j=i;j>=1;j-=2)
		 {
			printf(" %d",j);

		 }


	printf("\n");
	}




getch();
}