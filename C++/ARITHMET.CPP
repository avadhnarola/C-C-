#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	float ans;
	clrscr();
	b=5;

	cout<<"Enter A : ";
	cin>>a;

	cout<<"Enter B : "<<b<<endl;

	ans=a+b;
	ans=a-b;
	ans=a*b;
	ans=a%b;
	ans=(float)a/b;

	cout<<"Answer : "<<ans<<endl;


getch();
}