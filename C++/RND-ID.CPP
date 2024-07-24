#include<iostream.h>
#include<conio.h>
/*
class std
{
	int age,cnt;
	char name[20];
	static int id;
	public:

	void input(int x)
	{
		cout<<endl<<"Enter Name : ";
		cin>>name;
		cout<<endl<<"Age : ";
		cin>>age;
		cnt=id+x;

	}
	void display()
	{
		cout<<endl<<"Name : "<<name;
		cout<<endl<<"Age  : "<<age;
		cout<<endl<<"Id   : "<<cnt;
		cout<<endl<<"-----------";
	}


};
int std::id=100;
void main()
{
	std s[10];
	int cnt=100;


clrscr();
	for(int i=0;i<=2;i++)
	{
		s[i].input(i);
	}
	cout<<endl<<"----------->";
	for(i=0;i<=2;i++)
	{
		s[i].display();
	}

*/
class student
{
	int age,ids;
	char name[20];
	public:

	void input(int id)
	{
		cout<<endl<<"Enter Name : ";
		cin>>name;
		cout<<endl<<"Enter Age : ";
		cin>>age;
		ids=id;

	}
	void display()
	{
		cout<<endl<<"Name : "<<name;
		cout<<endl<<"Age : "<<age;
		cout<<endl<<"Id : "<<ids;
	}
};
void main()
{
	student s[10];
	int i,cnt=101;

clrscr();
	for(i=0;i<3;i++)
	{
		s[i].input(cnt+i);
	}
	for(i=0;i<3;i++)
	{
		s[i].display();
	}


getch();
}