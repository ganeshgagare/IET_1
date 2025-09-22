#include <iostream>
using namespace std;

class student {
    public:
    int a=7;
    void display(){
    
        cout<<"number is = "<<a;
    }
};


int main (){
    student obj;
    obj.display();   
}