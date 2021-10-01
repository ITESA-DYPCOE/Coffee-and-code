#include<bits/stdc++.h>
using namespace std;
int main(){
    deque <int> v{13,56,34,12};
    sort(v.begin(),v.end());   //increasing func
    for(auto elem:v)
    cout<<elem<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());  //decreasing func
    for(auto elem:v)
    cout<<elem<<" ";
    cout<<endl;
    
    return 0;
}