#include <iostream>
#include <cmath> // Required for pow()
using namespace std;

int main() {
    double base, exponent, result;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // The pow() function calculates base^exponent
    result = pow(base, exponent);

    cout << "Result is: " << result << endl;

    return 0;
}