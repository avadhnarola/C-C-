#include<stdio.h>
#include<conio.h>
/*
turnary operator
condition = ?
else = : (colon)

*/
void main()
{
     int a,b,c,d,e,ans;

     a=100;
     b=287;
     c=32;
     d=4;
     e=26;
     clrscr();


//     a>b?a>c?printf(" %d is Max",a):printf("%d is Max",b):b>c?printf("%d is Max",b):printf("%d is Max",c);

/*  3 Variables

     ans=a>b?a>c?a:c:b>c?b:c;
     printf(" %d is Max",ans);
*/

/*	4 Variables

	(a>b)?(a>c)?(a>d)?printf(" A is Max"):printf("D is Max")
		:(c>d)?printf(" C is Max"):printf("D is Max")
	:(b>c)?(b>d)?printf("B is max"):printf("D is Max")
		:(c>d)?printf("C is Max"):printf("D is Max");

	ans=a>d?a>c?a>d?a:d:c>d?c:d:b>c?b>d?b:d:c>d?c:d;

	printf("\n%d is Max "),ans;
*/

	ans=a>b?a>c?a>d?a>e?a:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e:b>c?b>d?b>e?b:e:d>e?d:e:c>d?c>e?c:e:d>e?d:e;

	printf("\n %d is Max",ans);




getch();
}



