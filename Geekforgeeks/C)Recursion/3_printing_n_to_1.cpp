#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
    if(n==0)
    {
        cout<<endl;
    return ;
    }
    cout<<n<<" ";
    func(n-1);
}
int main(){
    func(5);
    func(2);
    return 0;
}