#include<iostream>

using namespace std;

class complex 
{
	int real;
	int imaginary;
public:
	void input()
	{
		cout<<"enter the real part :";
		cin>>real;
		cout<<"enter the imaginary part :";
		cin>>imaginary;
	}
	void display()
	{
		//if(imaginary>=0)
		cout<<real<<" + "<<imaginary<<"i"<<endl;
	   // else
	   // cout<<real<<" - "<<imaginary<<"i"<<endl;
	}
};

int main()
{
    complex c[10];
	cout<< " enter  10  real and immaginary of a complex number"<<endl;
	for(int i=0;i<10;i++)
	{
        
		c[i].input();
	}
	for (int j = 0; j < 10; ++j)
	{
		c[j].display();
	}
	return 0;
}