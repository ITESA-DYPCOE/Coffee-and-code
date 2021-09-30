#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1,key=arr[i];
        while(j>=0&&arr[j]>key)  //this loop moves all the greater element one position forward 
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    //O(n^2) worst case (when array sorted in reverse order)
    ///In place and stable
    //Used in practise for small arrays(TimSort and Intrasort)
    //TimSort and Introsort are hybrid sorting algorithm which have combination of different sorting algorithm which are used based on size of array
    //O(n) best case (when array sorted so we will never go inside the while loop)
    //O(n^2) for average case
    //Best arraay for sorting an almost sorted array.
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[]={4,3,2,7,8,5,4};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    print(arr,n);
    return 0;
}