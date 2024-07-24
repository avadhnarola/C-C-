#include<stdio.h>
#include<conio.h>
struct student
{
	int sid;
	char name[25];
	int m1,m2,m3;

};
void main()
{
	struct student s[3];
	int per,i,total=0;
	clrscr();

	printf("\n take input from user : \n");
	for (i=0;i<3;i++)
	{
		printf("\n Enter Sid : ");
		scanf("%d",&s[i].sid);

		printf("\n Enter Name : ");
		scanf("%s",s[i].name);

		printf("\n Enter Marks1 : ");
		scanf("%d",&s[i].m1);
		printf("\n Enter Marks2 : ");
		scanf("%d",&s[i].m2);
		printf("\n Enter Marks3 : ");
		scanf("%d",&s[i].m3);
	}

	printf("\n\t SID \t NAME \t M1 \t M2 \t M3 \t TOTAL \t PR");
	printf("\n\t------------------------------------------------");
	for(i=0;i<3;i++)
	{
		total= s[i].m1+s[i].m2+s[i].m3;
		per = (total*100)/300;

		printf("\n\t %d \t %s \t %d \t %d \t %d \t %d \t %d",s[i].sid,s[i].name,s[i].m1,s[i].m2,s[i].m3,total,per);
		total=0;
		per=0;

	}

getch();
}
