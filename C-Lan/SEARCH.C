#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char arr1[5][10];
char search[10];
int i,j;
 int flag=0; //not found
clrscr();
 printf("\n Enter Array Elements : \n ");
for(i=0;i<5;i++)
{
gets(arr1[i]);
}
printf("\n Enter Elements to be searched : ");
gets(search);
for(i=0;i<5;i++)
{
if(strcmp(arr1[i],search)==0)
{
flag=1;
break;
}
}
if(flag == 1)
{
printf("\n Searched Element found");
}
else
{
printf("\n Searched Element not found");
}
getch();
}