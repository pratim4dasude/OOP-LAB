#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *s = NULL;
    int len;

public:
    String()
    {
        len = 6;
        s = new char[len];
        strcpy(s, "empty");
    }
    String(const char *temp)
    {
        len = strlen(temp);
        s = new char[len + 1];
        strcpy(s, temp);
    }
    void join(const char *s1, const char *s2)
    {
        char *temp = new char[strlen(s1) + strlen(s2) + 1];
        strcpy(temp, s1);
        strcat(temp, s2);
        cout << "Catenated String: " << temp <<endl;
    }
    void display()
    {
        cout << s << "\t" << len <<endl;
    }
};
int main()
{
    String s1;
    String s2("Pratim Dasude");
    s2.display();
    s2.join("HELLO ", "WORLD");
}