#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> &arr)
{
    cout << "PRINTING USING PRINT FUNCTION: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}
int main(){
    int m=3,n=2;

    vector<vector<int>> arr;  //here we are creating vector of vectors 

    for(int i=0;i<m;i++)
    {
        vector <int> v;
        for(int j=0;j<n;j++)
        {
            v.push_back(i+j);
        }
        arr.push_back(v); //pushing a vector in vector of vectors
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    print(arr);
    /*
    Adv: 
    *Even the number of rows is dynamic

    Rest is same as the previous method.

    */
    return 0;
}