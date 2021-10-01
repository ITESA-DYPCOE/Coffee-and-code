#include<bits/stdc++.h>
using namespace std;
void func(string s,string sub="",size_t k=0)
{
    if(k==s.length())
    {
        cout<<sub<<" ";
        return;
    }
    func(s,sub+s.at(k),k+1);
    func(s,sub,k+1);
}
int main(){
    string s="ABC";
    func(s);
    return 0;
}