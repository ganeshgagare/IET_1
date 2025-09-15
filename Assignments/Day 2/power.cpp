#include<iostream>
using namespace std;
int main()
{
    int base,exponent,i,power=1;
    cout<<"Enter base:\n";
    cin>>base;
    cout<<"Enter exponent:\n";
    cin>>exponent;
    for(i=1;i<=exponent;i++)
    {
        power=power*base;
    }
    cout<<"Result\n"<<power;
}