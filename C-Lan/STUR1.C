#include<stdio.h>
#include<conio.h>

struct stud
{
	int sid;
	char name[25];
	int m1,m2;

}s[3];

void main()
{
	int i,total,per;
	clrscr();

	for(i=0;i<3;i++)
	{
		printf("Sid : ");
		scanf("%d",&s[i].sid);
	}


getch();
}