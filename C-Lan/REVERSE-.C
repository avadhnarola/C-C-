#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rem,rev=0;
	clrscr();

	printf("\n Enter n : ");
	scanf("%d",&n);

	while(n!=0)
	{
	 rem=n%10;                 // 123 -->> 3,,   12-->> 2,,  1-->> 1
     //	 printf(" %d",rem);      //  3                2           1


	 rev=rev*10+rem;
     //  rev=0*10+3 -->   0 +3=3
     //  rev=3*10+2 -->  30 +2=32
     //  rev=32*10+1 --> 320+1=321

	 n=n/10;                  // 123-->> 12      12-->>1     1-->> 0

	}

		printf("Reverse : %d",rev);

getch();
}