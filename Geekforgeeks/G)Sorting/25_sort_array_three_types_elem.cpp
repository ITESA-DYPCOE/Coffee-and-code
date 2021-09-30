#include<bits/stdc++.h>
using namespace std;
void segregrateThreeTypes(int arr[],int n)
{
    // This algo is know as *****DUTCH NATION FLAG ALGORITHM******
    //This algo is very important.
    /*In this we divide the array in 4 parts :
    1)Satisfying 1st cond: from 0 to l-1 .
    2)Satisfying 2nd cond: from l to m-1.
    3)Unknown elements : from mid to h-1.
    4)Satisfying 3rd cond: from h to n-1.

    In this algo we are traversing through the unknown part and checking for our cond's till m<=r.
    1)If it satisfies 1st cond we swap l and m (since l is satisfying 2nd cond).
    2)If it satisfies 2nd cond we keep on moving m forward.
    3)If it satisfies 3rd cond we increase the size of right part by swapping m and h. But we do not increase m since the swapped arr[h] is unknown 
    and not a part of 2nd cond.
    */
    int l=0,m=0,r=n-1;
    int r1=5,r2=10;  //for elements lying between [5,10] as pivot.
    while(m<=r)
    {
        if(arr[m]<r1)  //satisfying 1st cond
        {
            swap(arr[l],arr[m]);
            m++;
            l++;
        }
        else if(arr[m]>=r1&&arr[m]<=r2)  //satisfying 2nd cond
        {
            m++;
        }
        else  //satisfying 3rd cond
        {
            swap(arr[m],arr[r]);
            r--;
            //Here we are not increasing m since we will check the element arr[r] which is now arr[m].
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[]={10,5,6,3,20,9,40};
    int size=sizeof(arr)/sizeof(int);
    segregrateThreeTypes(arr,size);
    print(arr,size);
    return 0;
}