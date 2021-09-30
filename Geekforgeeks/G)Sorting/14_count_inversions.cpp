#include<bits/stdc++.h>
using namespace std;
int countAndMerge(int inp[],int low,int mid,int high)  //this func is similiar to merge function
{
    int n1 = mid + 1 - low, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = inp[i + low];
    for (int i = 0; i < n2; i++)
        right[i] = inp[i + mid + 1];
    int res=0,i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            inp[k] = left[i];
            i++;
            k++;
        }
        else
        {
            inp[k] = right[j];
            j++;
            //updating the res is the only extra part
            res=res+(n1-i);
            k++;
             /*
            * We add n1-i to res if right<left since all the elements are sorted so rest of 
            the elements of left array will > current right element.
            * So all the element greater than left[i] will form inversion with right[i]
            * And also this is the advantage of sorting since we can easily find the number of elements forming inversion 
            without even iterating
            * So this will count all the inversions in which one is in the left and other in right but since it counts for all 
            l and r so it does it for every element.
            */
        }
    }
    while (i < n1)
    {
        inp[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        inp[k] = right[j];
        j++;
        k++;
    }
    return res;
}
int countInv(int arr[],int l,int r)
{
    int res=0;
    if(r>l)
    {
        int m=l+(r-l)/2;
        res=countInv(arr,l,m);  //counting inversion in left half
        res+=countInv(arr,m+1,r); //counting inversion in right half
        res+=countAndMerge(arr,l,m,r);  //counting inversion in which x is in left half and y in right half
    }
    return res;
    //Time complexity : O(nlogn), Auxillary space : O(n)
}
int main(){
    int arr[]={2,4,3,1,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<countInv(arr,0,size-1)<<endl;
    return 0;
}