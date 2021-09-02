#include <iostream>
using namespace std;
class sol
{
public:
    void print(char c, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    void print(int c)
    {
        for (int i = 0; i < c; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    void print(char c)
    {
        for (int i = 0; i < 80; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    void print()
    {
        for (int i = 0; i < 80; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }

};

int main()
{
    sol s;
    int n;
    char a;
    cout << " Enter how many times (enter 0 for skip)" << endl;
    cin >> n;
    cout << " Enter character (press 0 for skip)" << endl;
    cin >> a;

    if(a=='0' && n==0)
    {
        cout<<" When charater and no of times is not given by user"<<endl;
        s.print();
    }
    else if(n==0)
    {
        cout<<" When no of times is not given by user"<< endl;
        s.print(a);
    }
    else if(a=='0')
    {
        cout<<" When character is not given by user "<< endl;
        s.print(n);
    }
    else
    {
        cout << "\nDisplay a given character N no. of times:\n";
    s.print(a, n);
    }

    return 0;
}

/*
#include <iostream>
using namespace std;
class sol
{
public:
    void print(int n=80,char c='*')
    {
        for (int i = 0; i < n; i++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

};
int main()
{
    sol s;
    char a;
    int n;
    cout << " Enter how many times (enter 0 for skip)" << endl;
    cin >> n;
    cout << " Enter character (enter 0 for skip)" << endl;
    cin >> a;

    if(a=='0' && n==0)
    {
        cout<<" When charater and no of times is not given by user"<<endl;
        s.print();
    }
    else if(n==0)
    {
        cout<<" When no of times is not given by user"<< endl;
        s.print(a);
    }
    else if(a=='0')
    {
        
        cout<<" When character is not given by user "<< endl;
        s.print(n);
    }
    else
    {
        cout << "\nDisplay a given character N no. of times:\n";
    s.print(n, a);
    }
}*/