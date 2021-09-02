#include <iostream>
using namespace std;
class Employee
{
    char name[50];
    int id;
    int age;
    float basicSalary;
     public:
 void input(){
     cout<<"Enter the name of Employee\n";
     cin>>name;
     cout<<"Enter the ID of Employee\n";
     cin>>id;     
     cout<<"Enter the Age of Employee\n";
     cin>>age;
     cout<<"Enter the Basic Salary of Employee\n";
     cin>>basicSalary;
}
void output(){
    cout<<name<<"\t"<<age<<"\t"<<id<<"\t"<<basicSalary<<"\t\t"<<basicSalary+(0.8*basicSalary)+(0.1*basicSalary);
}
};
int main()
{
    int n;
    cout<<"Enter the no of employee"<<endl;
    cin>>n;
Employee e[n];
for (int i = 0; i < n; i++)
{
 e[i].input();
}
cout<<"Name\tAge\tID\tbasic salary\tGross Salary\n";
for(int i = 0; i < n; i++)
{
e[i].output();
cout<<"\n";
}
}