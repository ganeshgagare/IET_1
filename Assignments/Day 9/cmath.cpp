#include <cmath>
#include <iostream>
using namespace std;
int main(){

double base =2;
double exponent =3;

double value1 = 8.1;
double value2 = 9.5;
double value3 = 6.6;


int R1 = abs(value1);
int R2 = ceil(value2);
int R3 = floor(value3);
int R4 = round( value3);

// double result = pow(base,exponent);
// cout<<"Result="<<result;

cout<< R1<<" "<<R2<<" "<<R3<<" "<<R4<<endl;
return 0;
}