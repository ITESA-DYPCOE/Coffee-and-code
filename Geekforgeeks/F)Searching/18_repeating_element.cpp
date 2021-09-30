#include<bits/stdc++.h>
using namespace std;
/*
Conditions for this problem:
1)All the elements are from 1 to max(arr)
2) 1<=max(arr)<=n-1
*/
int repeating_element(int arr[],int size)
{
    //We are using the algorithm which is used to find the first element of a loop in linked list

    int slow=arr[0],fast=arr[0];
    //in phase 1 we move one ptr one steps at a time and another two steps at a time.
    //when we do this we will surely meet once inside the loop 
    do
    {
        slow=arr[slow];
        fast=arr[arr[fast]];
    } while (slow!=fast);
    slow=arr[0];
    /*in phase 2 we move a element outside and one remains inside. And when we move these two at the same phase 
    then they surely meet at the first element of the loop*/ 
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    int arr[]={4,2,1,3,2,2};
    int size=sizeof(arr)/sizeof(int);
    cout<<repeating_element(arr,size)<<endl;
    return 0;
}