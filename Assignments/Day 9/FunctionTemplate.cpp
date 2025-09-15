#include <iostream>  
using namespace std; 

template<class X,class Y,class Z> 
void fun(X a ,Y b,Z c)  
{  
    cout << "Value of a is : " <<a<< endl;  
    cout << "Value of b is : " <<b<< endl;
	cout << "Value of c is : " <<c<< endl;  
}   



int main()  
{  
   fun(10,9,8);  
   return 0;  
}
