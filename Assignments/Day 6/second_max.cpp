#include<iostream>
using namespace std;
int main()
{
    int n,i,max=0,sec_max=0;
    cout<<"Enter no of elements in array \n";
    cin>>n;
    int a[n];
    cout<<"Accept elements \n";
    for(i=0;i<n;i++)
    {
        cin>>*(a+i);
    }
    max = a[0]; 
    for (int i = 1; i < n; ++i) {
        if (a[i] > max) {
            max = a[i]; 
        }
    }
    cout << "The maximum element in the array is: " << max <<endl;

    sec_max = a[1];
    for(i =2;i<n;i++)
    {
        if(a[i] > sec_max && a[i] != max)
        {
            sec_max = a[i];
        }
    }
    cout<<"Second maximum element in array is: "<<sec_max<<endl;
    return 0;
}