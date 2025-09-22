#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0){
            cout<<"Not Prime"<<endl;
        }
            else
            cout<<"Prime no "<<endl;
        
    }
