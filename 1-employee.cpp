#include<iostream>
using namespace std;
struct emp {
    char name[30];
    char empid[10];
    int sal;
void display()
{
    cout<<"\nName of the employee "<<name<<"\nEmployee ID: "<<empid<<"\nSalary of the employee: "<<sal;
}
};
int main()
{
    emp e1;
    cout<<"Name of the employee: ";
    cin>>e1.name;
    cout<<"Employee ID: ";
    cin>>e1.empid;
    cout<<"Salary of the employee: ";
    cin>>e1.sal;
    e1.display();
}