#include <iostream>
using namespace std;


int main(){
    
//     int price=100;
//     try{
//         if(price<0){
//             throw 0;
//         }
//         cout<<price<<endl;
//     }

//     catch(int e){
//         cout << " Price cannot be negative.\n";
//     }

//     return 0;
// }


int marks = -2;

try{
    if(marks<=0){
          throw 0;
    }

    cout<<"Valid Marks"<<endl;
}

catch(int e){
    cout<< "Error Occured due to Invalid marks";
    }}