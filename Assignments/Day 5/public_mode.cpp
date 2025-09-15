#include<iostream>
using namespace std;
class base{
    private:
    int prt = 10;//private
    protected:
    int prot = 20;//protected
    public:
    int pub = 30;//public
    void showprt(){
        cout<<prt<<endl;
    }
    void showprot(){
        cout<<prot<<endl;
    }
    void showpub(){
        cout<<pub<<endl;
    }

};
class parent:public base{
    // int prt = 10;//private---not access in derived as well as non derived class
    // int prot = 20;//protected---becomes protected in public mode
    // int pub = 30;//public---becomes public in public mode

};

int main(){
    base b1;
    b1.showprt();
    b1.showprot();
    b1.showpub();
    b1.pub = 300;//in main method we can only access public attributes/function not a public or  aprotected
    b1.showpub();
}