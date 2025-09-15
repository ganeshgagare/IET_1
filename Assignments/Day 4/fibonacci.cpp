#include<iostream>
using namespace std;
int main(){
    int n, t1 = 0, t2 = 1,nextterm = 0;
    cout<<"Enter the no. of terms";
    cin>>n;

    cout<<"fibonacci series \n"<<t1<<","<<t2<<",";

    for (int i = 3; i < n; i++)
    {
    
        nextterm = t1 + t2;
        cout<<nextterm<<",";
        t1 = t2;
        t2 = nextterm;
    }
    
}