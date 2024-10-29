#include<iostream>
using namespace std;
class add{
    public:
    int a,b,c;//data member 
    void input();//member function 
    void output();
};
void add ::input(){
    cout<<"Enetr Two Number";
    cin >>a>>b;
    c=a+b;

}
void add ::output(){
    cout<<"sum is "<<c;
    

}
int main(){
    add s;
    s.input();
    s.output();
    return 0;
    


}