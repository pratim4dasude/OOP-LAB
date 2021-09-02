#include <iostream>
using namespace std;
class array
{
public:
    void sort(int b[], int n)
    {
        int a;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (b[i] > b[j])
                {
                    a = b[i];
                    b[i] = b[j];
                    b[j] = a;
                }
            }
        }
    }
    void dupli(int a[], int n)
    {
        int c = 1, k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    k = i;
                }
            }
        }
        if (c == 1)
            cout << " no duplicates are found " << endl;
        else
            cout << "the duplicate number is : " << a[k] << " times " << c << endl;
    }
};
int main()
{
    array k;
    int  n;
    cout << "enter the length of the array :";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " number :";
        cin >> a[i];
    }
    k.sort(a, n);
    cout << "smallest number in an array is : " << a[0] << endl;
    cout << "largest  number in an array is : " << a[n - 1] << endl;
    k.dupli(a, n);
    return 0;
}