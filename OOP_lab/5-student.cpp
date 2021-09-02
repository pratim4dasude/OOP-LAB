#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[30];
    float totalmarks;
    static float avg;

    void input()
    {
        float a, b, c;
        cout << " Enter the roll: ";
        cin >> roll;
        cout << " Enter the name: ";
        cin >> name;
        cout << " Enter marks of 3 subject: ";
        cin >> a >> b >> c;
        totalmarks = a + b + c;
    }

    friend void calc(Student *a, int n)
    {

        float s = 0.0;
        for (int i = 0; i < n; i++)
        {
            cout << " Student " << i + 1 << " Detail " << endl;

            Student::avg = a[i].totalmarks / 3;
            cout << " Student Name " << a[i].name << endl;
            cout << " Student Roll No. " << a[i].roll << endl;
            cout << " Student Total Marks " << a[i].totalmarks << endl;
            cout << " Student Average is: " << Student::avg << endl;
            cout << "\n";
            s = 0.0;
        }
    }
};
float Student::avg;
int main()
{
    Student s[10];
    int n;
    cout << " Enter the number of students: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    calc(s, n);
    return 0;
}