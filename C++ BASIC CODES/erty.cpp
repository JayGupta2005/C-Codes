#include<iostream>
using namespace std;
class add{
    private :
    int a,b,c;
    public:
    void adds(int x,int y){
        a=x;
        b=y;
        c=x+y;
        cout<<"sum Is "<<c;

    }

};
int main(){
    add a;
    a.adds(4,5);
    return 0;

}