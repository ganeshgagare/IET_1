#include<iostream>
using namespace std;

class vahicle{
    protected:
    string model;
    double price;
    string ownername;
public:
    vahicle(string m,double p,string n){
        model=m;
        price=p;
        ownername=n;
    }

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

    virtual ~vahicle()=default;

    virtual double calculatefare(int km) = 0;

    virtual void displayDetails(){
        cout<<"Ownername:"<<ownername<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Model:"<<model<<endl;
    }

};


class car : public vahicle{
    int seats;
    public:
    car(string n,double p,string m,int s):vahicle(m,p,n),seats(s){
        cout<<"Car constructor called."<<endl;
    }

    double calculatefare(int km){
        int rateperkm = 100;

        int fare;
        fare=rateperkm*km;
        return fare;


    }

    void displayDetails() override{
        cout<<"Ownername:"<<ownername<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Model:"<<model<<endl;
        cout<< "Seats:"<<seats<<endl;
    }
};

int main(){
    vahicle*obj = new car("Ganesh",5000,"BMW",3) ;
    obj -> displayDetails();

    int km=7;
    cout<< obj-> calculatefare(km);
    delete obj;

}

