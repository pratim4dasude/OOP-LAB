#include<iostream>
using namespace std;

struct employee{
	int empid;
	char name[20];
	float salary;
	int age;
	float gross;
    
    void input(struct employee *e)
{
	
	cout<<"Enter the name of the employee  ";
	cin>>name;
	cout<<"Enter the employee id ";
	cin>>empid;
	cout<<"Enter the salary of the employee ";
	cin>>salary;
	cout<<"Enter the age of the employee ";
	cin>>age;
  cout<<endl;
}

    void output(struct employee *e)
{ 
   
	cout<<name<<"\t\t"<<empid<<"\t\t"<<salary<<"\t\t"<<age<<"\t\t"<<gross<<endl;
}

};

void gross_calc(struct employee *e)
{
	e->gross =e->salary + 0.8*(e->salary) + 0.1*(e->salary);
}



int main()
{
    int n;
    cout<<"enter the number of employees :";
    cin>>n;
    struct employee em[n];
   struct employee *e;
   e=em;
    for(int i=0;i<n;i++)
    	{
    		e->input(&e[i]);
    		
    	}	
    cout<<"NAME"<<"\t\t"<<"ID"<<"\t\t"<<"SALARY"<<"\t\t"<<"AGE"<<"\t\t"<<"GROSS"<<endl;

    for (int i = 0; i < n; ++i)
    	{
    		gross_calc(&em[i]);
    		e->output(&em[i]);
    	}	


	return 0;
}