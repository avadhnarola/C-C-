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
	    void calc(time o1)
	    {
		//   hh=o1.hh;
		//   mm=o1.mm;
		//   ss=o1.ss;

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
	time ob1,ob2;

	ob1.input();
	ob1.calc(ob1);
	ob1.display();


getch();
}