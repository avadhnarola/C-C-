#include<iostream.h>
#include<conio.h>
class marksheet
{
		int rno,std,s1,s2,s3,s4,s5,total;
		float per;
		char sname[20];

		public:

		void rollno()
		{
			cout<<endl<<"Enter Roll No : ";
			cin>>rno;
		}
		void name()
		{
			cout<<endl<<"Enter Name : ";
			cin>>sname;
		}
		void stand()
		{
			cout<<endl<<"Enter Std : ";
			cin>>std;
		}
		void marks()
		{
			cout<<endl<<"Enter S1 : ";
			cin>>s1;

			cout<<endl<<"Enter S2 : ";
			cin>>s2;

			cout<<endl<<"Enter S3 : ";
			cin>>s3;

			cout<<endl<<"Enter S4 : ";
			cin>>s4;

			cout<<endl<<"Enter S5 : ";
			cin>>s5;
		}
		void sum()
		{
			total=s1+s2+s3+s4+s5;
		}
		void pr()
		{
			per=(float)total/5;
		}

		void grade()
		{
				if(per>=90 && per<=100)
			{
				cout<<endl<<"Grade A1";
			}
				else if(per>=80 && per<90)
			{
				cout<<endl<<"Grade A2";
			}
				else if(per>=70 && per<80)
			{
				cout<<endl<<"Grade B ";
			}
				else if(per>=60 && per<70)
			{
				cout<<endl<<"Grade C";
			}
				else if(per>=50 && per<60)
			{
				cout<<endl<<"Grade D";
			}
				else if(per>=40 && per<50)
			{
				cout<<endl<<"Grade E";
			}
				else if(per>=33 && per<40)
			{
				cout<<endl<<"Grade F";
			}
				else if(per<33)
			{
				cout<<endl<<"NO-GRADE";
			}

		}
		void result()
		{
			if(per>=33)
			{
				cout<<endl<<"PASS";
			}
			else
			{
				cout<<endl<<"FAIL";
			}

		}
			void display()
		{
			cout<<endl<<"Roll No : "<<rno;
			cout<<endl<<"Name : "<<sname;
			cout<<endl<<"STD : "<<std;
			cout<<endl<<"Marks : ";
			cout<<endl<<"----------";
			cout<<endl<<"S1 : "<<s1;
			cout<<endl<<"S2 : "<<s2;
			cout<<endl<<"S3 : "<<s3;
			cout<<endl<<"S4 : "<<s4;
			cout<<endl<<"S5 : "<<s5;
			cout<<endl<<"----------";
			cout<<endl<<"TOTAL : "<<total;
			cout<<endl<<"Per : "<<per;

		}


}s1;
void main()
{

clrscr();
		s1.rollno();
		s1.name();
		s1.stand();
		s1.marks();
		s1.sum();
		s1.pr();
		s1.display();
		s1.grade();
		s1.result();
getch();
}