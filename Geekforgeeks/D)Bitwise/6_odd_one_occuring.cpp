#include<bits/stdc++.h>
using namespace std;
int odd_one(vector <int> arr)
{
    int x=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        x=x^arr[i];
    }
    return x;
}
int main(){
    vector <int> v;
    v={4,3,3,4,4,5,5};
    cout<<"ODD ONE OCCURING :"<<odd_one(v)<<endl;
    return 0;
}