#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[20];
    cout<<"Enter string \n";
    cin>>str1;
    int start = 0;
    int length = 0;
    while (str1[length] != '\0')
    {
        length++;
    }
    int end = length-1;


    while (start<end)
    {
        char temp = str1[start];
        str1[start] = str1[end];
        str1[end] = temp;
        start++;
        end--;
    }
    cout<<str1<<endl;
    

}
