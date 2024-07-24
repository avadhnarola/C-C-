#include<iostream.h>
#include<conio.h>
class bank
{
		 char name[200];
		 long int accno,balance,cnt,deposite,afdepo,withdr,afwithdr;
		 public:

		 void open_account(long int acn)
		 {
			cout<<endl<<"Enter Name \t : ";
			cin>>name;
			accno=acn;
			cout<<endl<<"Balance \t : ";
			cin>>balance;

		 }
		 void show_account()
		 {
			cout<<endl<<"---------------------------";
			cout<<endl<<"Name \t\t : "<<name;
			cout<<endl<<"Account No \t : "<<accno;
			cout<<endl<<"Balance \t : "<<balance;
			cout<<endl<<"---------------------------";
		 }
		 void depositeam()
		 {  cout<<endl<<"\t\t +";
		    cout<<endl<<"Deposite \t : ";
		    cin>>deposite;
		 }
		 void afdeposite()
		 {
		    afdepo=balance+deposite;
		    cout<<endl<<"After Deposite";
		    cout<<endl<<"===========================";
		    cout<<endl<<"Total Balance \t :"<<afdepo;
		    cout<<endl<<"===========================";
		 }
		 void withdraw()
		 {
			cout<<endl<<"\t\t -";
			cout<<endl<<"Withdraw Amount  :";
			cin>>withdr;
		 }
		 void afwithdraw()
		 {
			afwithdr=afdepo-withdr;
			cout<<endl<<"After Withdraw";
			cout<<endl<<"===========================";
			cout<<endl<<"Total Balance \t :"<<afwithdr;
			cout<<endl<<"===========================";


		 }



}c1;
void main()
{
	   long int cnt=1001290;
clrscr();
		c1.open_account(cnt+1);
		c1.show_account();
		c1.depositeam();
		c1.afdeposite();
		c1.withdraw();
		c1.afwithdraw();

getch();
}