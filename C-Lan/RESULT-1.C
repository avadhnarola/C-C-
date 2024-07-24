#include<stdio.h>
#include<conio.h>

void main()
{
	int s1,s2,s3,s4,s5,total,per,result;


	clrscr();

	printf("\n Enter Marks Of S1 : ");
	scanf("%d",&s1);

	printf("\n Enter Marks Of S2 : ");
	scanf("%d",&s2);

	printf("\n Enter Marks Of S3 : ");
	scanf("%d",&s3);

	printf("\n Enter Marks Of S4 : ");
	scanf("%d",&s4);

	printf("\n Enter Marks Of S5 : ");
	scanf("%d",&s5);

 printf("\n\n--------------------");
total=s1+s2+s3+s4+s5;

	printf("\n TOTAL : %d",total);

 printf("\n--------------------");
if(s1>33 && s2>33 && s3>33 && s4>33 && s5>33)
{
per=total/5;

	printf("\n Percentage : %d",per);
	printf("\n");
}
else
{
	 printf("\n Percentage : ",per );


}
	if(per>=90 && per<=100)
	{
		printf("\n Grade A ");
	}
	else if(per>=80 && per<90)
	{
		printf("\n Grade B ");
	}
	else if(per>=70 && per<80)
	{
		printf("\n Grade C ");
	}
	else if(per>=60 && per<70)
	{
		printf("\n Grade D ");
	}
	else if(per>=50 && per<60)
	{
		printf("\n Grade E ");
	}

printf("\n\n=====================");
 if(per>=33 && per<=100)
 {
	printf("\n You are PASS ");
 }
 else
 {
	printf("\n You are FAIL ");
 }
printf("\n=====================");

getch();
}