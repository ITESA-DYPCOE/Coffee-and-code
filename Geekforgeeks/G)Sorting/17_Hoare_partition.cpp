#include<bits/stdc++.h>
using namespace std;
int hoare_partition(int arr[],int l,int r)
{
    srand(time(nullptr));
    int p=rand()%(r-l+1)+l;   //generating random pivot to prevent worst case for sorted arrays.
    swap(arr[l],arr[p]);
    int pivot=arr[l];  //last element as the pivot in hoare's partition
    int i=l-1,j=r+1; 
    while(1)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);   //for smaller elements
        do
        {
            j--;
        }
        while(arr[j]>pivot);    //for bigger elements
        if(i>=j)   //if they cross each other 
        return j;
        
        swap(arr[i],arr[j]);  //arr[i] will always be > pivot and arr[j] will always be < pivot since that is the only 
        // cond for which the do while loops stop
        
    }
    /*
    * After the completion of the algo we get two partitions one having elements less than or equal to pivot and 
    other having elements greater or equal to pivot.
    * Time complexity :O(n)
    * Auxillary space :O(1)
    * In lomuto the pivot element was being placed in its correct position but in this that is not happening
    * This is the reason why we have different program of quick sort for these partitions.
    * But Hoare's partition does way less comparisions as compared to lomuto and works better.
    * Hoare's partition is not stable  and this can be seen when all the elements are same . Then only the swap will work in the while loop. 
    */
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[]={12,10,5,9};
    int size=sizeof(arr)/sizeof(int);
    hoare_partition(arr,0,size-1);
    print(arr,size);
    return 0;
}