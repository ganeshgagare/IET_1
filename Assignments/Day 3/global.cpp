#include<iostream>
using namespace std;
void show();
int y = 10;//global var
int main(){
cout<<y<<endl;//10
y++;
show();
cout<<y<<endl;//13
    
    
}
void show(){
    cout<<y<<endl;//11
    y++;
    cout<<y<<endl;//12
    y++;
    
}