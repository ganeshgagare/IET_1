#include<iostream>
using namespace std;
class abc{
    int a,b,sum;

    public:
    void add(int p, int q){
        cout<<"Address of this = "<<this<<endl;//this pointer stores the address of current obj that invokes the function. whenever an object invokes member function,the address of that object stored in this pointer is passed implicitly to the function as a hidden parameter . 
        a=p;
        b=q;
        sum = a+b;//compiler implicitly add this-> before attribute.
        // sum = this->a+this->b;//compiler implicitly add this-> before attribute.
    }
    void display(){
        cout<<"sum is "<<sum<<endl;
        
    }
};

void add(int, int);
void display();
int main(){
    abc a1;
    a1.add(10,20);
    a1.display();
    cout<<"Address of obj is "<<&a1<<endl;
}