#include<iostream>
using namespace std;
int count=0;
class demo{
    public:
    demo(){
        count++;
        cout<<"Constructor Created"<<count<<endl;
    }
    ~demo(){
        count--;
        cout<<"Destroy"<<count<<endl;
    }
};
int main(){
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0;
}