
// 1. Square Pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows " << endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


// 2. Right angled Triangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;


}


// Pyramid Pattern 

#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Pyramid pattern is\n";
    m = n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m-1; j++) {
           cout<< " ";
        }
        for(int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        m--;
        cout << endl;
    }
    return 0;
}



// Half Daimond pattern 

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Half Diamond pattern \n";
    m=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}