#include<iostream>
using namespace std;


int main(){
    cout<<"Enter the no:"<<" 21";
    int n;
    cin>>n;
    int fact =1;
    for(int i=1;i<=n;i++){
    fact=fact*i;
    }

    cout<<"The Factorial of given no is:"<<" "<< fact;
}