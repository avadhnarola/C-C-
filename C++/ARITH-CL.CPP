#include<iostream.h>
#include<conio.h>
class arithmetic
{
	int n1,n2,ans;
	public:

	void input()
	{
		cout<<endl<<"Enter Number 1 : ";
		cin>>n1;

		cout<<endl<<"Enter Number 2 : ";
		cin>>n2;
	}
	void add()
	{
		ans=n1+n2;

	}
	void sub()
	{
		ans=n1-n2;
	}
	void mul()
	{
		ans=n1*n2;
	}
	void div()
	{
		ans=n1/n2;
	}
	void mod()
	{
		ans=n1%n2;
	}
	void display()
	{
		cout<<endl<<"Ans = "<<ans;
	}



};

void main()
{ 	arithmetic ob;
	int choice;
	clrscr();
	ob.input();
do
{
	cout<<endl<<"PRESS 6 TO QUITE";
	cout<<endl<<"-----------------";
	cout<<endl<<"1.Addition ";
	cout<<endl<<"2.Substraction";
	cout<<endl<<"3.Multiplication";
	cout<<endl<<"4.Division";
	cout<<endl<<"5.Modulos";
	cout<<endl<<"-----------------";


	cout<<endl<<"Enter Your Choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
		{
			ob.add();
			ob.display();
			break;
		}
		case 2:
		{
			ob.sub();
			ob.display();
			break;
		}
		case 3:
		{
			ob.mul();
			ob.display();
			break;
		}
		case 4:
		{
			ob.div();
			ob.display();
			break;
		}
		case 5:
		{
			ob.mod();
			ob.display();
			break;
		}
		case 6:
		{
			cout<<endl<<"You are quite & Thank You";
		}
	    /*	default :
		{
			cout<<endl<<"Invalide Choice";
		}*/

	}
}while(choice!=6);



getch();
}