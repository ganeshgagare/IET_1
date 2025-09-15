#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    static int cnt;
    public:
    void show();
    Complex();
    Complex(int,int);
    static int getcnt();

};
int Complex::cnt;
void Complex::show()
{
    cout<<"Complex no is "<<real<<"+"<<img<<"i";
}
Complex::Complex()
{
    cout<<"in default constructor\n";
    real=10;
    img=20;
    cnt++;
}
Complex::Complex(int r,int i)
{
    cout<<"in parameterized constructor\n";
    real=r;
    img=i;
    cnt++;
}
int main()
{
    Complex c1,c2;
    Complex c3(5,6);
    c3.show();
}

