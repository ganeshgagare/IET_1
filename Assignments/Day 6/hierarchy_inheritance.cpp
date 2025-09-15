#include<iostream>
using namespace std;
class base{
    public:
    void show_base(){
        cout<<"This is Base Class"<<endl;
    }
};
class derived1:public base{
    public:
    void show_derived1(){
        cout<<"This is Derived 1 Class"<<endl;
    }
};
class derived2:public base{
    public:
    void show_derived2(){
        cout<<"This is Derived 2 Class"<<endl;
    }
};

int main(){
   derived1 d1;
   d1.show_base();
   d1.show_derived1();
   derived1 d2;
   d2.show_base();
   d2.show_derived1();
}