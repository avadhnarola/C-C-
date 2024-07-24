#include<iostream.h>
#include<conio.h>
void main()
{
	int rno,std,s1,s2,s3,s4,s5,total;
	char name[20],div;
	float per;
	clrscr();

	cout<<endl<<endl<<"\t\t MARKSHEET";

	cout<<endl<<endl<<"Enter Roll No : ";
	cin>>rno;

	cout<<endl<<"Enter Name : ";
	cin>>name;

	cout<<endl<<"Enter Standerd : ";
	cin>>std;

	cout<<endl<<"Enter Division : ";
	cin>>div;

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

	cout<<endl<<"--------------";

total=s1+s2+s3+s4+s5;
	cout<<endl<<"Total = "<<total;

	cout<<endl<<"--------------";

	cout<<endl<<"--------------";

per=(float)total/5;
	cout<<endl<<"Per = "<<per;

	cout<<endl<<"--------------";

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

	cout<<endl<<"=============";

	if(per>=33 && per<=100)
	{
		cout<<endl<<"PASS";
	}
	else
	{
		cout<<endl<<"FAIL";
	}

	cout<<endl<<"=============";

getch();
}