#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=2,cnt=0;
	clrscr();

	printf("\n Enter a Number : ");
	scanf("%d",&n);

	while(i<n)
	{
	    if(n%i==0)
	    {
		cnt++;
		break;
	    }
	i++;
	}

	if(cnt==0)
		printf("\n %d : Prime Number ",n);
	else
		printf("\n %d : Not Prime Number ",n);

getch();
}