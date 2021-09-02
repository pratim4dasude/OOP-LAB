#include<iostream>
#include<math.h>
using namespace std;


class dist
{
    int a,b,c,d;
public:
    void get()
{
    cout<<"\n Enter the  first coordinate (x1,y1):";
    cin>>a>>b;
     cout<<"\n Enter the  second coordinate (x2,y2):";
    cin>>c>>d;
}
    void calc()

{    int k;
    float l;
    k=pow(c-a,2)+pow(d-b,2);
    l=pow(k,0.5);   
    cout<<"\n Distance between point(x1,y1) and (x2,y2) is: "<<l << "\n\n";
}
};
int main()
{
   
    dist m;
    m.get();
    m.calc();

return 0;
}