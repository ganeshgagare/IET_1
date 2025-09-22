#include <iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    cout<<"enter the string :"<<endl;
    cin>> str;

char *start=str;
char *end = str + strlen(str)-1;
        while( start<end){
           char temp=*start;
            *start++=*end;
            *end--=temp;

        }

        cout<<"Reversed str "<<str<<endl;
        return 0;
}