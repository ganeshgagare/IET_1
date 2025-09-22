
#include <iostream>
#include <string.h>
#include <bitset>
using namespace std;

// Function to add two integers
int addNumbers(int a, int b) {
    return a + b;
}

// Function to add two binary numbers (as strings)
string addBinary(const string& a, const string& b) {
    int num1 = stoi(a, nullptr, 2);
    int num2 = stoi(b, nullptr, 2);
    int sum = num1 + num2;
    return bitset<32>(sum).to_string().substr(32 - max(a.size(), b.size()));
}

// Function to add two characters
char addChars(char a, char b) {
    return a + b;
}

int main() {
    // Add two numbers
    int num1 = 5, num2 = 7;
    cout << "Sum of numbers: " << addNumbers(num1, num2) << endl;

    // Add two binary numbers
    string bin1 = "1011", bin2 = "1101";
    cout << "Sum of binary numbers: " << addBinary(bin1, bin2) << endl;

    // Add two characters
    char ch1 = 'A', ch2 = 1; // 'A' + 1 = 'B'
    cout << "Sum of characters: " << addChars(ch1, ch2) << endl;

    return 0;
}

// int Addnum(int a,int b){
//     return a+b;
// }
// int main(){
//     int x = 5, y = 10;
//     cout << "Sum: " << Addnum(x, y) << endl;
//     return 0;
// }


