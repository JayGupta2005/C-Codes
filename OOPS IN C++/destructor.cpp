#include<iostream>
using namespace std;
int count=0;
class demo{
    private:
    int a;
    public:
    demo(){
        count++;
        cout<<"Created"<<count<<endl;
    }
    ~demo(){
        count--;
        cout<<"Destroyed"<<count<<endl;
    }
};
int main(){
    demo aa,bb;{
        demo dd;
    }
    return 0;
}