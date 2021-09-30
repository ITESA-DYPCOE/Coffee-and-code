#include<bits/stdc++.h>
using namespace std;
const int R=3,C=2;
void print(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[R][C]={10,20,30,40,50,60};
    print(arr);
    // Unfortunatily there is not way to pass both the sizes of the matrix as variable.
    return 0;
}