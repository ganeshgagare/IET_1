#include<iostream>
#include<string.h>
using namespace std;
class vehicle{
    public:
    string brand;
    int year;
    int noofwheels;
};
class fourwheeler:public vehicle{
    public:
    void display(){  
        cout<<"For Car"<<endl;
        cout<<"Brand is: "<<brand<<endl;
        cout<<"Year is "<<year<<endl;
        cout<<"No of wheels: "<<noofwheels<<endl;
    }
    
};
class twowheeler:public fourwheeler{
    public: 
    
    void display(){
        cout<<"For Bike"<<endl;
        cout<<"Brand is: "<<brand<<endl;
        cout<<"Year is "<<year<<endl;
        cout<<"No of wheels: "<<noofwheels<<endl;
    }    
};
int main()
{
   twowheeler  c1;
    c1.brand="Bajaj";
    c1.year=1986;
    c1.noofwheels=2;
    c1.display();
    fourwheeler  c2;
    c2.brand="Toyota";
    c2.year=1999;
    c2.noofwheels=4;
    c2.display();


}