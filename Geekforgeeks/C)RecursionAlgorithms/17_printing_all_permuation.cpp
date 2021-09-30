#include<bits/stdc++.h>
using namespace std;
void perm(string s,int i=0)
{
    if(i==s.length()-1)
    {
        cout<<s<<endl;
        return ;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s.at(i),s.at(j));
        perm(s,i+1);
        swap(s.at(i),s.at(j));
    }
}
int main(){
    perm("MOHIT");
    return 0;
}