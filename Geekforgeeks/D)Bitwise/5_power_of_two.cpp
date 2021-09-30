#include<bits/stdc++.h>
using namespace std;
bool power_of_two(int n)
{

    return (n!=0)&&((n&(n-1))==0);
}
int main(){
    cout<<boolalpha;
    cout<<power_of_two(64)<<endl;
    cout<<noboolalpha;
    return 0;
}