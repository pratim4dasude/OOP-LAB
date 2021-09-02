#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double float_value = 123.456789;
  cout << "With precesion 4: value is" << setw(10);
  cout << setprecision(4) << float_value << endl;
  cout << "With precesion 9: value is" << setw(20);
  cout << setprecision(9) << float_value << endl;
  cout << fixed;
  cout << "With precesion 5: value is" << setw(30);
  cout << setprecision(5) << float_value << endl;
  cout << "With precesion 10: value is" << setw(40);
  cout << setprecision(10) << float_value << endl;
  return 0;
}