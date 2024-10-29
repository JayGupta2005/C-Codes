#include <iostream>
using namespace std;
class a
{
public:
    void display1()
    {
        cout << "In A class" << endl;
    }
};
class b : public a
{
public:
    void display2()
    {
        cout << "In B class" << endl;
    }
};
class c
{
public:
    void display3()
    {
        cout << "In C class" << endl;
    }
};
class d : public c, public b
{
public:
    void display4()
    {
        cout << "In D class" << endl;
    }
};
int main()
{
    d aa;
    aa.display1();
    aa.display2();
    aa.display3();
    aa.display4();

    return 0;
}
