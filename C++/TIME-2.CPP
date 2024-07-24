#include<iostream.h>
#include<conio.h>
class time
{
	    int hh,mm,ss,ts,tm;
	    public:

	    void input()
	    {
		cout<<endl<<"Enter Hour : ";
		cin>>hh;
		cout<<endl<<"Enter Minutes : ";
		cin>>mm;
		cout<<endl<<"Enter Second : ";
		cin>>ss;
	    }
	    void calc(time o1,time o2)
	    {
		   hh=o1.hh+o2.hh;
		   mm=o1.mm+o2.mm;
		   ss=o1.ss+o2.ss;

		  if(ss>=60)
		  {
			ts=ss/60;
			mm=mm+ts;
			ss%=60;
		  }
		  if(mm>=60)
		  {
			tm=mm/60;
			hh=hh+tm;
			mm%=60;
		  }

	    }
	    void display()
	    {
		    cout<<hh<<":"<<mm<<":"<<ss<<endl;

	    }
};
void main()
{
clrscr();
	time ob1,ob2,ob3;

	ob1.input();
	ob2.input();
	ob3.calc(ob1,ob2);
	ob3.display();


getch();
}