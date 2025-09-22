#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, n;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (as a decimal): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> time;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;

    double amount = principal * pow((1 + rate / n), n * time);
    double interest = amount - principal;

    cout << "Compound interest is: " << interest << endl;
    cout << "Total amount is: " << amount << endl;

    return 0;
}