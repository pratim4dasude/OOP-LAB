#include <iostream>
using namespace std;
class reference
{
public:
void swap(int &a, int &b)
{
	int c;
	c=a;
	a=b;
	a=c;
}
void display(int a,int b)
{
	cout << "First Numer: " << a << endl;
	cout << "Second Numer: " << b << endl;
}
};
int main()
{
	reference r;
	int a,b;
	cout << "Enter two Numbers: " << endl;
	cin >>a>>b;
	cout << "Before swapping: " << endl;
	r.display(a,b);
	r.swap(a,b);
	cout << "After Swapping: "<< endl;
	r.display(a,b);
}