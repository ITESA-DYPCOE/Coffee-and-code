#include<bits/stdc++.h>
using namespace std;
void frequenciesOfArray(int arr[],int size)
{
    unordered_map <int,int> freq;
    for(int i=0;i<size;i++)
    {
        freq[arr[i]]++;
    }
    for(auto e:freq)
    {
        cout<<e.first<<" "<<e.second<<endl;
    }
    //Time complexity: Theta(n)
    //Auxillary space : O(n)
}

int main(){
    int arr[]={4,5,2,5,6,3,4,6,2,2,4};
    int size=sizeof(arr)/sizeof(int);
    frequenciesOfArray(arr,size);
    return 0;
}