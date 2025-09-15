#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        complex();
        complex(int,int);
        void display() const;
        void setreal(int);
       int getreal() const;
};
void complex::setreal(int r){
    real = r;
}
int complex::getreal() const
{
    return real;
}
complex::complex()
{
    cout<<"in default constructor\n";
    real=1;
    img=2;
}
complex::complex (int r,int i)
{
    cout<<"in para constructor\n";
    real=r;
    img=i;
}
void complex::display() const{
    cout<<"complex no is "<<real<<"+"<<img<<"i"<<endl;

}
int main()
{
    const complex c2(5,6);
    cout<<"real part"<<c2.getreal();
    complex c3(1,2);
    c3.setreal(10);
    cout<<"real part"<<c3.getreal();
}