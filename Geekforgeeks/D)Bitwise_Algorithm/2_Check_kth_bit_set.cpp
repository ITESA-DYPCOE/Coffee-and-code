#include<bits/stdc++.h>
using namespace std;
bool func_left_shift(int n,int k){
    return (n&(1<<(k-1))!=0);
}
bool func_right_shift(int n,int k){
    return (n>>(k-1))%2==1;
}
int main(){
    int N=0;
    int K=2;
    cout<<boolalpha;
    cout<<func_left_shift(N,K)<<endl;
    cout<<func_right_shift(N,K)<<endl;
    cout<<noboolalpha;
    return 0;
}