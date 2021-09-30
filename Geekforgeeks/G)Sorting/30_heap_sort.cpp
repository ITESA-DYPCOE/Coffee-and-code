#include<bits/stdc++.h>
using namespace std;
/*
HEAP SORT can be seen as an improvement of selection sort . In every step it selects the max elements and place it in its correct position.

The difference bet selection and heap sort being that in selection sort we were finding the min element linearly in this we do that logarithmically by
using the heap data structure.
*/
void maxHeapify(int arr[],int n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n&&arr[left]>arr[largest])
    {
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest])
    {
        largest=right;
    }

    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        maxHeapify(arr,n,largest);
    }
}
void buildHeap(int arr[],int n)  //time complexity of this is O(n)
{
    //In buildHeap we run heapify for all nodes other than the leaves.
    for(int i=(n-2)/2;i>=0;i--)  //in this (n-2)/2 is the parent of the leaf node (n-1) and we find this by using the formula that parent of i is (i-1)/2.
    {
        maxHeapify(arr,n,i);
    }
}
void heap_sort(int arr[],int size)
{
    buildHeap(arr,size);   //O(n)
    for(int i=size-1;i>=1;i--)  
    {
        swap(arr[i],arr[0]);
        maxHeapify(arr,i,0); //O(logn)
        //Also in maxHeapify we are passing i as the size of the heap so we are decreasing the size of the heap.
    }
    /*Time comoplexity : O(n*logn) (BEST FOR COMPARISION BASED SORTING ALGORITHMS).
   
    Even though heap sort's time complexity is less there are huge hidden costs in heap sort due to 
    which it is slower in practise than merge and quick sort. Hence quick and merge are used more in practise.

    Still heap sort is used in STL lib's sort function which uses INTROSORT . But heap sort is only used when 
    the depth of the sorting algo tree becomes more than logn.
    Auxillary space : O(logn).
    */
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[]={3,5,6,2,1,6};
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    heap_sort(arr,size);
    print(arr,size);
    return 0;
}