#include <iostream>
using namespace std;


class rectangle {
    public:
    int area;
    int l=20;
    int b=10;
    void findarea(){
        
        area = l*b;
        cout<<area;
    }
};

int main(){
    rectangle a;
    a.findarea();
}