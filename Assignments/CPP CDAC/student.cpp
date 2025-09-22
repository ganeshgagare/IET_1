#include <iostream>
#include<string>
using namespace std;

class student {
    public:
    int roll;
    int marks;
    string name;
    string dob;


    void input(){
        cin>>roll>>name>>dob>>marks;
    }

    void display(){
        cout<< roll << endl;
    }
}

int main(){
    student s[10];
    
}