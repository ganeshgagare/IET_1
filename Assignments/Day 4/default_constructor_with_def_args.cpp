#include<iostream>
using namespace std;
class A{
    int sum;
    
    public:
    A(int a, int x = 0){
        sum = a+x;
    }
    
    void print(){
        cout<<sum<<endl;
    }
};

int main(){
A obj1(10);
A obj2(10,10);

obj1.print();
obj2.print();
}