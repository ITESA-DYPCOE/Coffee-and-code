#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int size,int x)
{
    //We need to check whether there exists a pair with sum = x in the given array
    //For this we use hashing 
    vector<int> hash(size,0);
    for(int i=0;i<size;i++)
    {
        if(hash[x-arr[i]]==1)
        return 1;

        hash[arr[i]]=1;
    }
    return 0;
    //Time complexity is O(n)
    //Space complexity is O(n)
}
int main()
{
    int arr[] = {3,5,9,2,8,10,11};
    int size = sizeof(arr) / sizeof(int);
    cout<<sum(arr,size,177)<<endl;
    return 0;
}