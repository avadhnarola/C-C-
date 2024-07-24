#include<stdio.h>
#include<conio.h>
void main()
{
    int num,cout=0;
    clrscr();

    printf("\n Enter A Number : ");
    scanf("%d",&num);

    while(num!=0)
    {

	num=num/10;
	cout++;

    }
	printf("\n Count is : %d ",cout);


getch();
}