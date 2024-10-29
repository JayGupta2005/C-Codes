#include<iostream>
using namespace std;
class encap{
    private:
    int a;
    public:
    void set(int x){
        a=x;
    }
    int get(){
        return a;
    }
};
int main(){
    encap s;
    s.set(10);
    cout<<s.get();
    return 0;
}