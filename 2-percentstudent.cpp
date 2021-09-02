#include<iostream>
using namespace std;

class student
{
	
	char name[20];
	char roll[20];
	int marks[5];
    int total_marks;
    float persent;

public:
	void input()
	{
		
		cout<<"enter the student name :";
		cin>>name;
		cout<<"enter the roll :";
		cin>>roll;
	for (int i=0; i<5;i++)
    {

    
		cout<<"enter the marks :";
		cin>>marks[i];
    }
	}
    void calculate()
    {
        for(int i=0; i<5; i++)
        {
            total_marks=total_marks+marks[i]; 
        }
         persent=total_marks*0.2;
    }
	void Display()
	{
		
		cout<<"the name of the student:"<<name<<endl;
		
		cout<<"the student roll is "<<roll<<endl;;

		cout<<"the total marks :"<<total_marks<<endl;
        
		cout<<" percentage obatin   :"<<persent<<" % "<<endl;

	}
};

int main()
{
    student b;
	b.input(); b.calculate();b.Display();
	return 0;
}