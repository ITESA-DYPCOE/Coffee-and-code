#include<bits/stdc++.h>
using namespace std;
int strg(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;

    int A=strg(n-a,a,b,c);
    int B=strg(n-b,a,b,c);
    int C=strg(n-c,a,b,c);

    int maxi=max(A,B);
    maxi=max(C,maxi);

    if(maxi==-1)
    return -1;

    return maxi+1;
}
int main(){
    cout<<strg(5,2,5,1)<<endl;
    return 0;
}