#include<iostream.h>
#include<conio.h>
class binary
{
	   long int num,a[10];
	   int i;
	    public:

	    void number()
	    {
			cout<<endl<<"Enter Number : ";
			cin>>num;
	    }
	    void convert()
	    {
		   for(i=0;num>0;i++)
		   {
			a[i]=num%2;
			num=num/2;
		   }

	    }
	    void display()
	    {
		for(i=i-1;i>=0;i--)
		{
		cout<<" "<<a[i];
		}
	    }


};
void main()
{

	binary n1;

clrscr();
		n1.number();
		n1.convert();
		n1.display();

getch();
}