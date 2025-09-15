#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double principal, rate, time, compoundInterest;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}
