#include<iostream>
using namespace std;

class student
{
	
	char name[20];
	char roll[20];
	int marks;

public:
	void input()
	{
		
		cout<<"enter the student name :";
		cin>>name;
		cout<<"enter the roll :";
		cin>>roll;
	
		cout<<"enter the marks :";
		cin>>marks;
	}
	void Display()
	{
		
		cout<<"the name of the student:"<<name<<endl;
		
		cout<<"the student roll  is "<<roll<<endl;;

		cout<<"the student marks :"<<marks<<endl;

	}
};

int main()
{
    student b;
	b.input();
	b.Display();
	return 0;
}