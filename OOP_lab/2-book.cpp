#include<iostream>
using namespace std;

class book
{
	int b_isbn;
	char b_name[20];
	char b_author[20];
	char b_publisher[20];

public:
	void get_Book_info()
	{
		
		cout<<"enter the book name :";
		cin>>b_name;
		cout<<"enter the name of the author :";
		cin>>b_author;
		cout<<"enter the name of the publisher :";
		cin>>b_publisher;
		cout<<"enter the book isbn :";
		cin>>b_isbn;
	}
	void Display()
	{
		cout<<"the book name is :"<<b_name<<endl;
		cout<<"the book isbn code is :"<<b_isbn<<endl;
		
		//puts(b_name);
		cout<<"the book author is "<<b_author<<endl;;
		//puts(b_author);
		cout<<"the book  publisher is  "<<b_publisher<<endl;;
		//puts(b_publisher);
	}
};

int main()
{
    book b;
	b.get_Book_info();
	b.Display();
	return 0;
}