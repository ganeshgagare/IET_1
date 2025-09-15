#include<iostream>
using namespace std;
void swap(int , int);
int main(){
    int a = 10;
    int  b = 20;
    swap(a,b);

}

void swap(int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"after swapping\n"<<"a="<<a<<"b="<<b;
}