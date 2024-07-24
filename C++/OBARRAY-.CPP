#include<iostream.h>
#include<conio.h>
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