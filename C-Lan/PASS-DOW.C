#include<stdio.h>
#include<conio.h>
void main()
{
	int pass,c_pass;
	clrscr();

	printf("\n PASSWORD : ");
	scanf("%d",&pass);

	do
	{
	    printf("\n Confirm PASSWRORD : ");
	    scanf("%d",&c_pass);

	    if(pass==c_pass)
	    {
	       printf("\n---------------");
	       printf("\n\n WEL-COME ");
	       printf("\n\n---------------");

		break;

	    }

	}while(pass!=c_pass);


getch();
}