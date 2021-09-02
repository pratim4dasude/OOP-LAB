#include <iostream>
using namespace std;
class d2;
class d1
{
private:
    int feet, inches;

public:
    void get()
    {
        cout << "Enter the distance in feet:";
        cin >> feet;
        cout << "Enter the distance in inches:";
        cin >> inches;
    }
    friend void distance(d1 &f, d2 &m);
};
class d2
{
private:
    int meter, cm;

public:
    void get()
    {
        cout << "Enter the distance in meter:";
        cin >> meter;
        cout << "Enter the distance in cm:";
        cin >> cm;
    }
    friend void distance(d1 &f, d2 &m);
};
void distance(d1 &f, d2 &m)
{
    int dis1, dis2;
    dis1 = (f.feet * 0.3048) + (f.inches * 0.0254);
    dis2 = (m.meter * 1) + (m.cm * 0.01);
    if (dis1 > dis2)
    {
        cout << f.feet << " feet " << f.inches << " inches "<< "  is greater than  " << m.meter << " meter " << m.cm << " cm.";
    }
    else if (dis2 > dis1)
    {
        cout << m.meter << " meter " << m.cm << " cm "<< "  is greater than  " << f.feet << " feet " << f.inches << " inches.";
    }
    else
    {
        cout << m.meter << " meter " << m.cm << " cm "<< "  is equal to  " << f.feet << " feet " << f.inches << " inches.";
    }
}
int main()
{
    d1 f;
    d2 m;
    f.get();
    m.get();
    distance(f, m);
    return 0;
}