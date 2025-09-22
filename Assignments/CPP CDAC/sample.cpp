#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string model;
    double price;
    string ownername;

    public:
    Vehicle(string m,double p,string n){
        model=m;
        price=p;
        ownername=n;
    }

    virtual ~Vehicle()=default;

    virtual double calculatefare()=0;

    void setPrice(double p){
        price=p;
    }

    double getPrice(){
        return price;
    }

    void setModel(string m){
        model=m;
    }

    string getOwnername(){
        return ownername;
    }

    virtual void displayDetails(){
         cout<<"Ownername:"<<ownername<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Model:"<<model<<endl;
    }

};


class Bike : public Vehicle{
public:
int seats;

Bike(string m,double p,string n,int seats):Vehicle(m,p,n),seats(s){
    cout<<"bike  constructor called";

}

 void displayDetails() override{
         cout<<"Ownername:"<<ownername<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Seats:"<<seats<<endl;
    }


    double calculatefare(int km) override {
        int rateperkm = 100;

        int fare;
        fare=rateperkm*km;
        return fare;
    }


};


int main(){
    Vehicle*obj=new Bike("BMW",1100,"Ganesh",5);
    int km = 5;

    obj->displayDetails();
    cout<<obj-> calculatefare(km);

    delete obj;
}