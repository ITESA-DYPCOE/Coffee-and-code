#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr{10,20,5,7};
    int n=4;
    sort(arr.begin(),arr.end());   //increasing func
    for(auto elem:arr)
    cout<<elem<<" ";
    cout<<endl;
    sort(arr.begin(),arr.end(),greater<int>());  //decreasing func
    for(auto elem:arr)
    cout<<elem<<" ";
    cout<<endl;
    
    return 0;
}