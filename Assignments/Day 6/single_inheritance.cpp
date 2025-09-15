#include<iostream>
#include<string.h>
using namespace std;
class vehicle{
    public:
    string brand;
    int year;
    void display(){
        cout<<"Brand is: "<<brand<<endl;
        cout<<"Year is "<<year<<endl;
    }
};
class Car:public vehicle{
    public:
    int noofdoors;
    void displaycar(){
        cout<<"No of doors: "<<noofdoors;
    }

};
int main()
{
    Car c1;
    c1.brand="Toyota";
    c1.year=1999;
    c1.noofdoors=4;
    c1.display();
    c1.displaycar();

}