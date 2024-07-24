
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

		for(i=1;i<=10;i+=2)
	{

	   for(j=1;j<=i;j+=2)
	   {
		printf("%d ",j);

	   }



	printf("\n");
	}


	for(i=2;i<=10;i+=2)
	{
		for(j=2;j<=12-i;j+=2)
		{
			printf("%d ",j);

		}

	printf("\n");
	}



getch();
}