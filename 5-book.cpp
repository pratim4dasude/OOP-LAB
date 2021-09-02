#include <iostream>
using namespace std;

class book
{
public:
    int price;
    char name[20];
    char author[20];

public:
    void get_Book_info()
    {

        cout << "enter the book name :";
        cin >> name;
        cout << "enter the name of the author :";
        cin >> author;
        cout << "enter the book price :";
        cin >> price;
    }
    friend void Display(book);
};
void Display(book b)
{
    cout << "Book name is :" << b.name << endl;    
    cout << "Book author is " << b.author << endl;
    cout << "Book Price is :" << b.price << endl;
}

int main()
{
    int n, a, c, i;
    cout << " Enter the no of book" << endl;
    cin >> n;
    book b[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter BOOK " << i + 1 << " Detail" << endl;
        b[i].get_Book_info();
        cout << "\n";
    }
    cout << " Enter the price range " << endl;
    cin >> a >> c;
    for (i = 0; i < n; i++)
    {
        if (b[i].price >= a && b[i].price <= c)
        {
            Display(b[i]);
            cout << "\n";
        }
    }

    return 0;
}