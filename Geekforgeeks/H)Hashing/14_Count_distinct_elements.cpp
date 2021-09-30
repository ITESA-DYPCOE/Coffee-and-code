#include<bits/stdc++.h>
using namespace std;
int countDistinctElement(int arr[],int size)
{
    unordered_set<int> s(arr,arr+size);   /*cpp has contructors which allow us to directly instantiate 
                                            arrays to unordered set */
    return s.size();
    /*
    Time complexity : theta(n)
    Space complexity : O(n)
    */
}
int main(){
    int arr[]={4,5,2,5,6,3,4,6,2,2,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<countDistinctElement(arr,size)<<endl;
    return 0;
}