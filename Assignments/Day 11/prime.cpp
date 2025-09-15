   


#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cin>>n;
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            cout<<"Not Prime"<<endl;
        }
    }
   cout<<Is Prime<<endl;
}
