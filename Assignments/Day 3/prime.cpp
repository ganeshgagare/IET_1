#include<iostream>
using namespace std;

int main(){

    bool isprime = true;
    int num;
    cout<<"enter a number\n";
    cin>>num;

    if(num == 0 || num == 1){
        cout<<"not prime";
    }
    
    for (int i = 2; i <= num-1; i++)
    {
        if (num%i==0)
        {
            isprime = false;
           break;
        }
       
        
    }
    if (isprime == true){
        cout<<"Prime";
    }else
    {
       cout<<"Not prime";
    }
    
    

}