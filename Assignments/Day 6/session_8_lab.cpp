//  Write a student class and use it in your program. Store the data of 10 students and display
//  the sorted data according to their roll numbers, dates of birth, and total marks.

#include<iostream>
#include<string.h>
using namespace std;
class student{
    int roll_no;
    string dob;
    int marks;
    public:
    void set_data(int , string , int);
    void get_data();
    student(int, string , int);
};

student::student(int roll_no = 0, string dob = "00-00-0000", int marks=0){
    this->roll_no = roll_no;
    this->dob = dob;
    this->marks = marks;
}

void student::set_data(int roll_no, string dob, int marks){
    this->roll_no = roll_no;
    this->dob = dob;
    this->marks = marks;
}

void student::get_data(){
    cout<<"Roll no is "<<roll_no<<endl;
    cout<<"Date of Birth is "<<dob<<endl;
    cout<<"Marks are "<<marks<<endl;

}

int main(){
    student s[10];
    s[0].set_data(1,"22-9-2025",76);
    s[1].set_data(2,"2-6-2025",74);
    s[2].set_data(3,"22-9-2025",56);
    s[3].set_data(4,"10-9-2025",76);
    s[4].set_data(5,"22-9-2025",76);
    s[5].set_data(6,"22-7-2025",45);
    s[6].set_data(7,"22-9-2025",56);
    s[7].set_data(8,"10-7-2025",76);
    s[8].set_data(9,"10-9-2025",71);
    s[9].set_data(10,"22-7-2025",96);
    
    for (int i = 0; i < 10; i++)
    {
        
        s[i].get_data();
        cout<<endl;
    }
    
}