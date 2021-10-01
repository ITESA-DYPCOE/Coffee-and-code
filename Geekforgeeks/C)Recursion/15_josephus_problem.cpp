#include<bits/stdc++.h>
using namespace std;
int josephus(int n,int k)
{
    if(n==1)
    {
        return 0;
    }

    return (josephus(n-1,k)+k)%n;
}
int main(){
    cout<<"PERSON LEFT :"<<josephus(3,3)<<endl;
    return 0;
}