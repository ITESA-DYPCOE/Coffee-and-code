#include<bits/stdc++.h>
using namespace std;
void print(int **arr,int m,int n)
{
    cout<<"PRINTING USING PRINT FUNCTION: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m=3,n=2;
    int **arr;
    arr=new int*[m]; //allocating space for storing arrays of pointer
    for(int i=0;i<m;i++)
    arr[i]=new int[n];    //dynamically allocating space for the array associated with each pointer
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=i+j;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    print(arr,m,n);
    /*
    Adv of this double pointer setup is that we create array with rows of different sizes

    JAGGED ARRAY: 2d array with different row sizes.

    DisAdv of this double pointer setup is that it is not cache friendly as we will see many cache misses coz it is stored in 
    contigous memory location

    */
    return 0;
}