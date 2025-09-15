#include<iostream>
using namespace std;
void display(char = '*',int=30);
int main()
{
    int count=80;
    cout<<"No arguments passed\n";
    display();
    cout<<"First argument passed\n";
    display('#');

    cout<<"two argument passed\n";
    display('$',count);
    
}
void display(char ch,int count)
{
    for (  int i = 0; i < count; i++)
    {
        cout<<ch;
    }
    cout<<endl;
    
}