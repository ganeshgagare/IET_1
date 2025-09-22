#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v = 0) { value = v; }

    // + operator
    Number operator+(Number n) {
        return Number(value + n.value);
    }

    // prefix ++ operator
    Number operator++() {
        value++;
        return *this;
    }

    // > operator
    bool operator>(Number n) {
        return value > n.value;
    }

    // << operator for cout
    friend ostream& operator<<(ostream &out, Number n) {
        out << n.value;
        return out;
    }
};

int main() {
    Number n1(10), n2(20);

    Number n3 = n1 + n2;
    cout << "n1 + n2 = " << n3 << endl;

    ++n1;
    cout << "After ++n1: " << n1 << endl;

    if (n1 > n2) {
        cout << "n1 is greater than n2" << endl;
    } else {
        cout << "n1 is not greater than n2" << endl;
    }

    return 0;
}
