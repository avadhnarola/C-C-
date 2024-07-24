#include<iostream.h>
#include<conio.h>
class addition
{
	int a,b;
	public:

	void input()
	{
		cout<<endl<<"Enter A : " ;
		cin>>a;

		cout<<endl<<"Enter B : ";
		cin>>b;
	}
	void calc(addition a1,addition a2)
	{
	  a=a1.a+a2.a;                 // a1 no a+ a2 no a = object3 no a
	  b=a1.b+a2.b;                 // a1 no b+ a2 no b = object3 no b

	}
	void display()
	{
		cout<<endl<<"A : "<<a;
		cout<<endl<<"B : "<<b;
	}
};
void main()
{
		addition ob1,ob2,ob3;
clrscr();
		ob1.input();
		ob2.input();
		ob3.calc(ob1,ob2);
		ob3.display();




getch();
}