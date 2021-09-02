#include <iostream>
using namespace std;
class datatype
{
   public:
    void output()
    {
    cout << "Size of int: " << sizeof(int) << " bytes"<< endl;
    cout << "Size of float: " << sizeof(float) << " bytes"<< endl;   
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes"<< endl;
    cout << "Size of short: " << sizeof(short) << " bytes"<< endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes"<< endl;
    }
};
int main() 
{    
  datatype d;
  d.output();
    return 0;
}