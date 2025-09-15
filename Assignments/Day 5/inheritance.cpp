#include<iostream>
using namespace std;
class shape{
    int area;
    public:
    void cal_rec_area(int l, int b){
        area = l*b;
    }

    void show_area(){
        cout<<area<<endl;
    }
    
   

    
};
class rectangle:public shape{

    int length, breadth;
    public:
    void getval(int a, int b){
        length = a;
        breadth = b;
        cal_rec_area(length , breadth);
    }
    // cal_rec_area(length , breadth);//gives error
    
    
    
};


int main(){
    rectangle r1;
    r1.getval(10,20);
    r1.show_area();
    
}