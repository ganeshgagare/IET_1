#include<iostream>
using namespace std;
class cDate{
    int dd,mm,yy;
    public:
    void accept();
    void display();
    void setDd(int);
    int getmm();
};

class complex{
   int real,img;
    public:
    void accept();
    void display();
    void setreal(int);
    int getreal();
};

void cDate::accept(){
    cout<<"Date is \n";
    cin>>dd>>mm>>yy;
}
void cDate::display(){
    cout<<"The Date is: "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

void cDate::setDd(int d){
    dd = d;
}
int cDate::getmm(){
    return mm;
}



void complex::accept(){
    cout<<"Enter the real and img \n";
    cin>>real>>img;
}
void complex::display(){
    cout<<"Complex No. is: "<<real<<"+"<<img<<"i"<<endl;
}

void complex::setreal(int r){
    real = r;
}
int complex::getreal(){
    return real;
}
int main(){
    cDate d1;
    d1.accept();
    d1.display();
    d1.setDd(23);
    d1.display();
    cout<<"month is "<<d1.getmm()<<endl;

    complex c1;
    c1.accept();
    c1.display();
    c1.setreal(10);
    c1.display();
    cout<<"Real part is "<<c1.getreal();



}