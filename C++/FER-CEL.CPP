#include<iostream.h>
#include<conio.h>
class temp
{
	float fe,ce;
	public:

	void ferdata()
	{
		cout<<endl<<"Enter Fernhit :";
		cin>>fe;
	}
	void celdata()
	{
		cout<<endl<<"Enter Celcius : ";
		cin>>ce;
	}

	void fernhit()
	{
		fe=(float)ce*9/5+32;

	}
	void celcius()
	{
		ce=(float)(fe-32)*5/9;

	}
	void ferdisplay()
	{
		cout<<endl<<"Celcius to Fernhit : "<<fe;
	}
	void celdisplay()
	{
		cout<<endl<<"Fernhit to Celcius : "<<ce;
	}


}tmp;
void main()
{
	int choice;
clrscr();

	cout<<endl<<"----------------------";
	cout<<endl<<"1. Fernhit to Celcius ";
	cout<<endl<<"2. Celcius to Fernhit ";
	cout<<endl<<"----------------------";

	cout<<endl<<"Enter Choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
		{
			 tmp.ferdata();
			 tmp.celcius();
			 tmp.celdisplay();
			 break;
		}
		case 2:
		{
			tmp.celdata();
			tmp.fernhit();
			tmp.ferdisplay();
			break;
		}
		default:
		{
			cout<<endl<<"Invalid Choice";

		}

	}


getch();
}