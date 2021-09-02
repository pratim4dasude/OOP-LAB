#include <iostream>
#include <string.h>
using namespace std;

class object
{
    private:
    int data;
    static int count;

    public:
    object()
    {
        count++;
    }
    void assign(int d)
    {
        data = d;
    }
    void print()
    {
        cout << data << endl;
    }
    static int countObjects()
    {
        return count;
    }
};
int object::count = 0;
int main()
{
    object a, b, c, d, e;

    a.assign(5);
    b.assign(6);
    c.assign(4);
    d.assign(9);
    e.assign(2);

    a.print();
    b.print();
    c.print();
    d.print();
    e.print();

    cout << "No. of Object: " << object::countObjects() << endl;

    return 0;
}