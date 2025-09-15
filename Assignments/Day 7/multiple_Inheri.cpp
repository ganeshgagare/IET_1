#include <iostream>
using namespace std;

class Parent1 {
public:
    int id_p1;
};
class Parent2 {
public:
    int id_p2;
};
class Child: public Parent1,public Parent2 {
public:
    int id_c;
};

 int main()
{
    Child obj1;
 
    
    obj1.id_c = 7;
    obj1.id_p1 = 91;
    obj1.id_p2 = 71;

    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Child id is: " << obj1.id_p1 << '\n';
    cout << "Parent id is: " << obj1.id_p2 << '\n';
    
}