#include <iostream>
#include <math.h>
using namespace std;

class area
{
    float ar;

public:
    area(float r)
    {
        ar = 3.14 * r * r;
    }
    area(float l, float b)
    {
        ar = l * b;
    }
    area(float a, float b, float c)
    {
        float s;
        s = (a + b + c) / 2;
        ar = s * (s - a) * (s - b) * (s - c);
        ar = pow(ar, 0.5);
    }
    void display()
    {
        cout << "Area : " << ar <<"  unit square";
    }
};
int main()
{
    int ch;
    float r, l, b, a, k, c;
    cout << "\n Enter Radius of the Circle : ";
    cin >> r;
    area a0(r);
    cout << "\n Enter Length and Breadth of the Rectangle : ";
    cin >> l >> k;
    area a1(l, k);
    cout << "\n Enter Sides of the Triangle : ";
    cin >> a >> b >> c;
    area a2(a, b, c);
    cout << "\nArea of circle" << endl;
    a0.display();
    cout << "\nArea of rectangle" << endl;
    a1.display();
    cout << "\nArea of triangle" << endl;
    a2.display();
    return 0;
}