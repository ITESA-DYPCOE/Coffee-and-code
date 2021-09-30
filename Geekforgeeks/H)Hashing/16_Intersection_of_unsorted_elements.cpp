#include<bits/stdc++.h>
using namespace std;
int intersection(int arr1[],int n1,int arr2[],int n2)
{
    unordered_set<int> s(arr1,arr1+n1);
    unordered_set<int> freq;
    for(int i=0;i<n2;i++)
    {
        auto it=s.find(arr2[i]);
        if(it!=s.end())
        {
            freq.insert(arr2[i]);
        }
    }
    for(auto elem:freq)
    {
        cout<<elem<<endl;
    }
    return freq.size();
}
int main(){
    int arr1[]={4,5,2,5,6};
    int size1=sizeof(arr1)/sizeof(int);
    int arr2[]={4,5,2,5,6,3,4,6,2,2,4};
    int size2=sizeof(arr2)/sizeof(int);
    intersection(arr1,size1,arr2,size2);
    return 0;
}