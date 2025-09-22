#include <iostream>
#include<stack>
using namespace std;

int main (){

    stack <int> s;

    s.push(30);
    s.push(40);

    // s.pop();
    cout<< s.top()<< endl;

    cout << s.size()<< endl;

    cout << s.empty();


    return 0;

}
