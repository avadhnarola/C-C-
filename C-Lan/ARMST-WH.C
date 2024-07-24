#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,sum=0,temp;
	clrscr();

	printf("\n Enter N : ");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
				  //153                   // 142
	rem=n%10;
	sum=sum+(rem*rem*rem);  // 0+(3*3*3)-->> 27       // 0+(2*2*2)-->> 8
	n=n/10;                // 153/10 -->> 15          // 142/10 -->> 14
	}

	if(temp==sum)
		printf("\n %d : is Armstrong Number ",temp);
	else
		printf("\n %d : is Not-Armstrong Number ",temp);








getch();
}
