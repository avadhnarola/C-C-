#include<iostream.h>
#include<conio.h>
class bank
{
		char name[20];
		long int cnt,i,acno;
		long float balance,deposite,withdr;
		public:

		 void open_account(long int ac)
		 {
			cout<<endl<<"Enter Name \t : ";
		    //	cin>>name;
			cin.ignore();
			cin.getline(name,100);
			acno=ac;
			cout<<endl<<"Balance \t : ";
			cin>>balance;

		 }
		 void show_account()
		 {
			cout<<endl<<"---------------------------";
			cout<<endl<<"Name \t\t : "<<name;
			cout<<endl<<"Account No \t : "<<acno;
			cout<<endl<<"Balance \t : "<<balance;
			cout<<endl<<"---------------------------";
		 }
		 void depositeam()
		 {  cout<<endl<<"\t\t +";
		    cout<<endl<<"Deposite \t : ";
		    cin>>deposite;
		    balance=balance+deposite;
		 }
		 void withdraw()
		 {
			cout<<endl<<"\t\t -";
			cout<<endl<<"Withdraw Amount  : ";
			cin>>withdr;
			balance=balance-withdr;
		 }
		 int search(long int ac)
		 {
			if(acno==ac)
			{
			  return 1;
			}
			else
			{
			  return 0;
			}

		 }



}c[10];
void main()
{
	   long int cnt=0;
	   int ch,i;


clrscr();
		cout<<endl<<"----Bank Managment System----";
	do
	{
		cout<<endl<<"1.Open Account \n2.Deposite \n3.Withdraw \n4.Show \n5.Quit ";
		cout<<endl<<"Enter Your Choice : ";
		cin>>ch;


		switch(ch)
		{
			case 1:
			{

				c[cnt].open_account(cnt+100);
				cnt++;
				break;
			}
			case 2:
			{
				int acn;
				cout<<endl<<"Enter Acount Number : ";
				cin>>acn;
				for(int i=0;i<=cnt;i++)
				{
					int val=c[i].search(acn);
					if(val==1)
					{
						c[i].depositeam();
						break;
					}

				}
				break;
			}
			case 3:
			{
				int acc;
				cout<<endl<<"Enter Acount Number : ";
				cin>>acc;
				for(int i=0;i<cnt;i++)
				{
					int val=c[i].search(acc);
					if(val==1)
					{
						c[i].withdraw();
						break;
					}

				}
				break;
			}
			case 4:
			{
			    for(int i=0;i<cnt;i++)
			    {
				c[i].show_account();

			    }

			}
			case 5:
			{
				break;
			}
			default:
			{
				cout<<endl<<"Invalid Choice";
			}


		}
	 }while(ch!=5);

		cout<<endl<<"----- Thank You -----";
getch();
}