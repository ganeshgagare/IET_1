#include <iostream>
using namespace std ;

int areaofrect(int l,int b){
    return l*b;
}


int main (){
    int l;
    int b;

    cout<<"enter the l,b"<<endl;
    cin>> l>> b;

    cout<<(areaofrect(l,b));
}