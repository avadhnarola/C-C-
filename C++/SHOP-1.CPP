#include<iostream.h>
#include<conio.h>
class shoping
{
	int cno,pr,sum,cnt;
	char pname[50];
	public:

	void countr()
	{
		int cnt=0;
	}

	void item(int code)
	{
		int cnt=0;
		cout<<"Product : ";
		cin>>pname[cnt];

		cout<<"Code    : "<<endl;
		cno[cnt]=code;
		cout<<"price   : ";
		cin>>pr[cnt];
		cnt++;
		cout<<endl;


	}
	void total()
	{
		int sum=0;
		for(int i=0;i<cnt;i++)
		{

			sum=sum+pr[i];
			cout<<endl<<"TOTAl : "<<sum;
		}
	}
	void display()
	{
		for(int i=0;i<cnt;i++)
		{
		cout<<endl<<"Product : "<<pname[i];
		cout<<endl<<"Code    : "<<cno[i];
		cout<<endl<<"Price   : "<<pr[i];
		cout<<endl;
		}
	}


}s;
void main()
{
	int i,ch,rnd=1;
	clrscr();
	s.countr();
do
{
	cout<<endl<<"1.Add Items ";
	cout<<endl<<"2.Show Items ";
	cout<<endl<<"3.Total Paying ";
	cout<<endl<<"4.Remove Items ";
	cout<<endl<<"5.Quit ";
	cout<<endl<<"Enter Choice : ";
	cin>>ch;

	switch(ch)
	{
	   case 1:
		{
			cout<<endl<<"Add to Cart "<<endl;

				s.item(rnd+100);
				rnd++;
				break;
		}
	   case 2:
		{
				s.display();
				break;
		}
	   case 3:
		{
				s.total();
				break;

		}
	   case 4:
		{

		}
	   default :
		{
			cout<<"Quit ";
		}
	}
}while(ch!=5);
getch();
}