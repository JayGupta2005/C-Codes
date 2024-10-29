#include<iostream>
using namespace std;
class person{    //class -not do memory alocation
    int age;
    string name;
    string address;  //these three are attributes
    public:
    void input(){    
        cout<<"Enter Age"<<endl;
        cin>>age;
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter Address"<<endl;
        cin>>address;
    }
    void output(){
        cout<<"Age "<<age<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Address "<<address<<endl;
    }                                        //these two are function .

};
int main(){
    person ankush,ankit,rohit;   //object- then memory alocation
    ankush.input();
    ankush.output();

    ankit.input();
    ankit.output();

    rohit.input();
    rohit.output();
}