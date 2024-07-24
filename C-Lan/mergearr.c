#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,k,size1,size2,total;
char arr1[10][10],arr2[10][10],merg[20][10];
clrscr();
printf("\n Enter size for 1st array: ");
scanf("%d",&size1);
printf("\n Enter size for 2nd array: ");
scanf("%d",&size2);
printf("\n Enter Array 1 strings in new line: ");
for(i=0;i<size1;i++)
{
 gets(arr1[i]);
 strcpy(merg[i],arr1[i]);
}
printf("\n Enter Array 2 strings in new line: ");
k=i;
for(j=0;j<size2;j++)
{
 gets(arr2[j]);
 strcpy(merg[k],arr2[j]);
 k++;
}
total=size1+size2;

//loop to print the merg array elements
printf("\n Elements from Merg Array: \n");
for(i=0;i<total;i++)
{
 puts(merg[i]);
}
getch();
}
