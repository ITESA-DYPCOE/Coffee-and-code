#include<bits/stdc++.h>
using namespace std;
/*
Conditions for this problem:
1)Array size >=2
2)Only one element repeats
3)All the elements are from 0 to max(arr)
4)0<=max(arr)<=(n-2)
*/
//The only difference between the prev and this code is we increase slow and fast by 1 so that so prevent self loop
int repeating_element(int arr[],int size)
{
    //We are using the algorithm which is used to find the first element of a loop in linked list

    int slow=arr[0]+1,fast=arr[0]+1;
    //in phase 1 we move one ptr one steps at a time and another two steps at a time.
    //when we do this we will surely meet once inside the loop 
    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    } while (slow!=fast);
    slow=arr[0]+1;
    /*in phase 2 we move a element outside and one remains inside. And when we move these two at the same phase 
    then they surely meet at the first element of the loop*/ 
    while(slow!=fast)
    {
        slow=arr[slow]+1;
        fast=arr[fast]+1;
    }
    return slow-1;
}
int main(){
    int arr[]={0,1,2,3,4,5,5,5,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<repeating_element(arr,size)<<endl;
    return 0;
}