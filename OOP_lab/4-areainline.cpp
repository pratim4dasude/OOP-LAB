#include <iostream>
#include <math.h>
using namespace std;
class area
{
public:
    inline float circle(int r)
    {
        return 3.14 * r * r;
    }
    inline float triangle(int b, int h)
    {
        return 0.5 * b * h;
    }
};
int main()
{
    area a;
    int r, b, h;
    cout << "Enter the radius of the circle" << endl;
    cin >> r;
    cout << "Enter the base and height of the triangle" << endl;
    cin >> b >> h;
    cout << "Area of circle is " << a.circle(r) << " unit square " << endl;
    cout << "Area of triangle is " << a.triangle(b, h) << " unit square " << endl;
    return 0;
}
