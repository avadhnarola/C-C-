#include<iostream.h>
#include<conio.h>
class quoandrem
{
	   int n1,n2,rem,quo;
	   public:

	   void input()
	   {
		cout<<endl<<"Enter Number 1 : ";
		cin>>n1;

		cout<<endl<<"Enter Number 2 : ";
		cin>>n2;
	   }
	   void quotient()
	   {
		quo=n1/n2;

	   }
	   void remainder()
	   {
		rem=n1%n2;

	   }
	   void display()
	   {
	    cout<<endl<<"Ans of Quotient : "<<quo;
	    cout<<endl<<"Ans of Remainder : "<<rem;
	   }

}n;
void main()
{
clrscr();
	n.input();
	n.quotient();
	n.remainder();
	n.display();

getch();
}