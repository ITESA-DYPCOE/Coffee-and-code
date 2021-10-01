#include<bits/stdc++.h>
using namespace std;
int func(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }
    int maxi;
    int A=func(n-a,a,b,c);
    int B=func(n-b,a,b,c);
    int C=func(n-c,a,b,c);
    maxi=max(A,B);
    maxi=max(maxi,C);

    if(maxi==-1)
    return -1;

    return maxi+1;
}
int main(){
    cout<<func(23,11,12,9)<<endl;
    return 0;
}