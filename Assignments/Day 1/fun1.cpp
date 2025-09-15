#include<iostream>
using namespace std;
void add(int, int);
int main(){
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;
    add(a,b);
    
}

void add(int a, int b){
    int result = a + b;
    cout<<"result is"<<result;

}