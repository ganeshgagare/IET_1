#include <iostream>
using namespace std;


void ganesh(int i){
    cout<<i<<endl;
}

void ganesh(float i){
    cout<<i<<endl;
}

int main(){
  
   ganesh(10);
   ganesh((float)5.5);  //These are standalone functions (global scope), so you just call them directly.


}



// #include <iostream>
// using namespace std;

// class Tanmay {
// public:
// void ganesh(int i){
//     cout<<i<<endl;
// };

// };

// int main(){
//    Tanmay obj1;
//    obj1.ganesh(10);


// }