#include<bits/stdc++.h>
using namespace std;
int missing(vector <int> arr)
{
    int x=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        x=x^arr[i];
    }
    for(int i=1;i<=arr.size()+1;i++)
    {
        x=x^i;
    }
    return x;
}
int main(){
    vector <int> v;
    v={1,4,3};
    cout<<"MISSING ELEMENT IS :"<<missing(v)<<endl;
    return 0;
}