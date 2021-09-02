#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;

public:
    void input()
    {
        cout << "Real: ";
        cin >> real;
        cout << "Imaginary: ";
        cin >> img;
    }
    void display()
    {
        cout << real << " + " << img << "i";
    }
};
int main()
{
    complex c[10];
    cout << "Enter the 10 real and imaginary part of complex numbers:\n\n";
    for (int i = 0; i < 10; ++i)
    {
       
        c[i].input();
        cout << endl;
    }
    cout << "\nThe 10 complex numbers are:\n";
    for (int i = 0; i < 10; ++i)
    {
        
        c[i].display();
        cout << endl;
    }
}