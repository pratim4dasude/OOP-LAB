#include <iostream>
using namespace std;
class multimatrix 
{ 
  public:
  void input(int a[10][10])
  {
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin>>a[i][j];

  }
  void multiply(int a[10][10], int b[10][10], int s[10][10])
  {
    int sum=0;
    for (int i= 0; i< 3; i++) {
      for (int j= 0; j< 3; j++) {
        for (int k = 0; k < 3; k++) {
          sum = sum + a[i][k]*b[k][j];
        }

        s[i][j] = sum;
        sum = 0;
      }
    }

  }
  void display(int s[10][10])
  {
    
      for (int i= 0; i< 3; i++) {
      for (int j= 0; j< 3; j++)
        cout<<s[i][j]<<"  ";
      cout<<"\n";
    }
  }
};
int main()
{
  multimatrix m;
  
  int a[10][10], b[10][10], s[10][10];

  cout<<"Enter elements of first matrix"<<endl;
  m.input(a);
  cout<<"Enter elements of second matrix"<<endl;
  m.input(b);
  cout<<"\nFirst matrix "<<endl;
  m.display(a);
  cout<<"Second Matrix "<<endl;
  m.display(b);
  m.multiply(a,b,s);
  cout<<"Product of the two matrices:\n";
  m.display(s);
  return 0;
}