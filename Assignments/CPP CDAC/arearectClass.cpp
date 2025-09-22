#include <iostream>
using namespace std ;



class Arearect{
    public:
    int l;
    int b;


    int areaOf(){

        return l*b;
    }


};


int main(){
    Arearect a;
    cin >> a.l >> a.b;

    cout<<(a.areaOf());
}