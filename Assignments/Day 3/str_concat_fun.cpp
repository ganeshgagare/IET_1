#include<iostream>
using namespace std;
void user_concate(char*, char*);
int main()
{
    char str1[50], str2[50];
    cout<<"Enter 1st string: \n";
    cin>>str1;
    cout<<"Enter 2nd string: \n";
    cin>>str2;
    user_concate(str1,str2);
    cout<<"concatenated string is \n"<<str1;
}
void user_concate(char* s1, char* s2)
{
    while(*s1 != '\0')
    {
        s1++;
    }
    while(*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}