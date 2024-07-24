#include<stdio.h>
#include<conio.h>

void main()
{
  int units;
  float bill,amount;
  clrscr();

  printf("\n Enter Units : ");
  scanf("%d",&units);


  if(units>0 && units<=50)
  {
	amount=units*0.50;
	printf("\n Amount : %f",amount);
  }
  else if(units>50 && units<=150)
  {
	amount=units*0.75;
	printf("\n Amount : %f",amount);
  }
  else if(units>150 && units<=250)
  {
	amount=units*1.20;
	printf("\n Amount : %f",amount);
  }
  else if(units>250)
  {
	amount=units*1.50;
	printf("\n Amount : %f",amount);

  }
bill=amount*20/100;
	printf("\n Bill : %f",bill+amount);

getch();
}





