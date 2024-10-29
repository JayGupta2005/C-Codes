#include<iostream>
using namespace std;
class en{
    private:
    int a;
    public:
    void set(int b){
        a=b;
        
    }
    int out(){
        return a;
    }

};
int main(){
    en c;
    c.set(10);
    cout<<c.out()<<endl;
    return 0;
}