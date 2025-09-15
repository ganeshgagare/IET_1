#include<iostream>
using namespace std;
int main(){
    int num , sum=0;
    cout<<"Enter a number \n";
    cin>>num;
    int num1 = num;

    while (num != 0)
    {
        int rem = num % 10;//3//2//1
        sum = sum + (rem*rem*rem);//3//5//6
        num = num/10;//12//1//0
    }
    cout<<sum<<endl;

    if(sum==num1){
        cout<<"The number you have entered is Armstrong Number";
    }else{    
        cout<<"The number you have entered is not an Armstrong Number";
    }
    
}