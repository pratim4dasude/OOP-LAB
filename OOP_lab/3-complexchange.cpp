#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
    void input()
    {
        cout << "Real part : ";
        cin >> real;
        cout << "Imaginary part : ";
        cin >> img;
    }
    void display()
    {
        cout << real << " + " << img << "i";
    }
};
complex Add(complex c1, complex c2)
{
    complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}
complex Subtract(complex c1, complex c2)
{
    complex c;
    c.real = c1.real - c2.real;
    c.img = c1.img - c2.img;
    return c;
}
complex Multiply(complex c1, complex c2)
{
    complex c;
    c.real = c1.real * c2.real - c1.img * c2.img;
    c.img = c1.real * c2.img + c1.img * c2.real;
    return c;
}
int main()
{
    complex c[2], add, sub, multi;

    for (int i = 0; i < 2; ++i)
    {
        cout << "Enter " << i + 1 << " complex number " << endl;
        c[i].input();
        cout << endl;
    }
    add = Add(c[0], c[1]);
    sub = Subtract(c[0], c[1]);
    multi = Multiply(c[0], c[1]);
    cout << "Addition: ";
    add.display(); 
    cout << endl;
    cout << "Subtraction : ";
    sub.display();
    cout << endl;
    cout << "Multiplication: ";
    multi.display();
    cout << endl;
}