#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,length=0;
char arr1[5][10];
clrscr();
printf("\n Enter strings in new line: \n");
for(i=0;i<5;i++)
{
 gets(arr1[i]);
}
//loop to print the array elements
for(i=0;i<5;i++)
{
 puts(arr1[i]);
}
//Loop to calculate length of each string in array
for(i=0;i<5;i++)
{
length=strlen(arr1[i]);
printf("\n Length of %s is %d",arr1[i],length);
length=0;
}
getch();
}