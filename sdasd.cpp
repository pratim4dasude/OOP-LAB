#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char *arr;
    int size;

public:
    String()
    {
        size = 0;
        arr = new char[size + 1];
    }

    String(char *s)
    {
        size = strlen(s);
        arr = new char[size + 1];
        strcpy(arr, s);
    }

    void show()
    {
        cout << arr << endl;
    }

    void join(String &a, String &b)
    {
        size = a.size + b.size;
        //delete arr;
        arr = new char[size + 1];
        strcpy(arr, a.arr);
        strcat(arr, b.arr);
    }
};

int main(void)
{
    char *a, *b;
    cout << " Enter two names " << endl;
    cin>>a;
    String name5(a);
    cin>>b;
   // String name5(a);
    String name6(b);
    String k1;
    k1.join(name5, name6);

    name5.show();
    name6.show();
    k1.show();
    return 0;
}