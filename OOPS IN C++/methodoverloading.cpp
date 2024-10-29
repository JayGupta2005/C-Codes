#include<iostream>
using namespace std;
void square(int a)
{
    cout<<" Square "<<a*a<<endl;
}
void cube(float b)
{
    cout<<"Cube="<<b*b*b;

}
int main()
{
    square(5);
    cube(2.0);
    return 0;
}