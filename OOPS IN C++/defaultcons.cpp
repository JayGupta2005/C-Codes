#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    public:
    demo(){
        a=5;
    }
    void putdata(){
        cout<<"A="<<a;
    }
    // void putdata();
};
// void demo::putdata(){
//     cout<<"A="<<a;
// }
int main(){
    demo aa;
    aa.putdata();
    return 0;
}
