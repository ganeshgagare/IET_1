#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20];
    char str2[20];
    cout<<"Enter First String"<<endl;
    cin>>str;
    int str_length = strlen(str);
    cout<<"Length is "<<str_length<<"\n";
    cout<<"Size is "<<sizeof(str)<<"\n";

    cout<<"Enter Second String"<<endl;
    cin>>str2;

    // cout<<"After copying the string "<<strcpy(str2,str)<<"\n";
    cout<<"After concatenation, the string is "<<strcat(str,str2)<<"\n";


}