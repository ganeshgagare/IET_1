#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"Accept array \n";
    for(i=0;i<=4;i++)
    {
        // cin>>*(a+i);//pointer notation
        cin>>a[i];//subscript notation
    }
    cout<<"Display array elements: \n";
    for(i=0;i<=4;i++)
    {
        // cout<<*(a+i)<<"\t";//pointer notation
        cout<<a[i]<<"\t";//Subscript notation
    }

    int b[3][3],j,k;
    cout<<"\nAccept array: \n";
    for(j=0;j<=2;j++)
    {
        for(k=0;k<=2;k++)
        {
            cin>>b[j][k];//subscript notation
            // cin>>*(*(a+i)+j);//pointer notation
        }

    }
    
    cout<<"Display array: \n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<b[i][j]<<"\t";
            // cout<<*(*(a+i)+j);//pointer notation
        }
        
    }
}
