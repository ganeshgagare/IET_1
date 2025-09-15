#include<iostream>
using namespace std;
void show();

int main(){
    show();
    show();
    
    
}
void show(){
    static int x = 10;//static local var
    cout<<x<<endl;//10 for first calling and 11 after second call
    x++;
    cout<<x<<endl;//11
    int y = 20;//local variable
    cout<<y<<endl;//20
    y++;
    cout<<y<<endl;//21
   
    
}