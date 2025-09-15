#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    // void show(int a, int b){
    //     a=a;
    //     b=b;
    void show(int p, int q){
        a = p;
        b = q;
        cout<<this<<endl;//this pointer stores the address of a
        cout<<&a<<endl;
        cout<<&b<<endl;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main(){
    A a1;
    a1.show(10,20);
    a1.display();
}