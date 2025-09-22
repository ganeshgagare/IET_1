#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v ;

    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.pop_back(5);
    v.capacity();
    v.max_size();
    sort(v.begin(),v.end());

    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}