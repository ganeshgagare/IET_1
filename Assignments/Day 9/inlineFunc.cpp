#include <iostream>
using namespace std;

inline long long factorial(int n) {
    if (n < 0) {
        // Factorial is not defined for negative numbers.
        return -1;
    }
    if (n == 0) {
        return 1;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Call the inline function. The compiler might replace this
    // call with the function's body at compile time.
    long long result = factorial(num);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << num << " is: " << result << endl;
    }

    return 0;
}