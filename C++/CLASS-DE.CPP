#include<iostream.h>
#include<conio.h>
class student
{
	   int age;
	   char name[10],gender;
	   public:

	   void inputdata()
	   {
		cout<<endl<<"Enter Name : ";
		cin>>name;
		cout<<endl<<"Enter Age : ";
		cin>>age;
		cout<<endl<<"Enter Gender : ";
		cin>>gender;


	   }
	   void display()
	   {
			cout<<endl<<"Name : "<<name;
			cout<<endl<<"Age : "<<age;
			cout<<endl<<"Gender : "<<gender;

	   }
}s1;

void main()
{
	student s2;
clrscr();
		 s1.inputdata();
		 s2.inputdata();
		 s1.display();
		 s2.display();

getch();
}