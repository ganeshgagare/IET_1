#include<iostream>
using namespace std;
// void add(int,int,int=2,int=3);//default arguments
void add(int a=0 , int b = 1 , int c = 2 , int d = 3 ){
    cout<<a+b+c+d<<endl;
}
int main(){
    // add();
    // add(12);
    add(12,12);
    add(12,12,12);
    add(12,12,12,12);
    
}