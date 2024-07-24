#include<stdio.h>
#include<conio.h>
void main()
{
   /*	int a=0,b=1,c,n;
	clrscr();

      //	printf("\n Enter Terms : ");
      //	scanf("%d",&n);


	printf("\n %d",a);
	printf("\n %d",b);
	c=a+b;

	while(c<=100)
	{
	printf("\n %d ",c);
	a=b;
	b=c;
	c=a+b;


	}
getch();
}    */

	int a=0,b=1,c,n;
	clrscr();

	printf("\n Enter Terms : ");
	scanf("%d",&n);


	printf("\n %d",a);
	printf("\n %d",b);
	c=a+b;

	for(n;n!=2;n--)
	{
	printf("\n %d ",c);
	a=b;
	b=c;
	c=a+b;


	}


getch();
}