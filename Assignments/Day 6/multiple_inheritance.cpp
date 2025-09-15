#include<iostream>
using namespace std;
class base1{
    public:
    void show_base1(){
        cout<<"This is Base 1 Class"<<endl;
    }
};
class base2{
    public:
    void show_base2(){
        cout<<"This is Base 2 Class"<<endl;
    }
};
class derived:public base1, public base2{
    public:
    void show_derived(){
        cout<<"This is Derived Class"<<endl;
    }
};

int main(){
    derived d1;
    d1.show_base1();
    d1.show_base2();
    d1.show_derived();
}