#include<iostream.h>
#include<conio.h>
class second
{
	    long int sec,min,hour;
	    public:

	    void input()
	    {
			cout<<"Enter Second : ";
			cin>>sec;

	    }
	    void conmin()
	    {
		   min=sec/60;

	    }
	    void conhour()
	    {
		   hour=sec/3600;

	    }
	    void display()
	    {
		   cout<<endl<<" Convert into HH:MM:SS ";
		   cout<<endl<<"   "<<hour<<"   :"<<min<<"   :"<<sec;

	    }




}s;
void main()
{
clrscr();
		s.input();
		s.conhour();
		s.conmin();
		s.display();

getch();
}


