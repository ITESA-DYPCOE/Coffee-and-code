#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][2]={10,20,30,40,50,60}; //for 2D arraays we need not write the internal brackets
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr1[][2]={{1,2},{3,4}};
    int arr2[][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    /*
    We can only omit the first dimension while initializing an 2D array
    */
    return 0;
}