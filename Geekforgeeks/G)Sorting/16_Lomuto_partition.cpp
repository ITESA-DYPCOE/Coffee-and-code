#include<bits/stdc++.h>
using namespace std;
int lomuto(int arr[],int l,int r)
{
    srand(time(nullptr));
    int p=rand()%(r-l+1)+l;   //generating random pivot to prevent worst case for sorted arrays.
    swap(arr[r],arr[p]);
    int s=l-1;  //denotes the ending of window containing elements smaller that pivot
    for(int i=l;i<r;i++)
    {
        if(arr[i]<arr[r])
        {
            s++;
            swap(arr[i],arr[s]);
        }
    }
    swap(arr[s+1],arr[r]);
    return s+1;
    //Time complexity : theta(n)
    //Auxillary complexity : O(1)
    //This algorithm is not stable.
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    // int arr[]={70,60,80,40,30};  //Cornor case : when last element is smaller than all the elements
    int arr[]={30,40,20,50,80};  //Cornor case : pivot greater tham all the elements
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    lomuto(arr,0,size-1);
    print(arr,size);
    return 0;
}