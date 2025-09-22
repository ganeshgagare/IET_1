#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Use a temporary variable to hold one of the values
    temp = a;// jisme dalna hai wo first = jo dalana
    a = b;
    b = temp;

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}


//without using third var
/*a = a + b;  
    b = a - b;  
    a = a - b;  */