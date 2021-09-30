#include<bits/stdc++.h>
using namespace std;
void power_set(string s)
{
    for(int i=0;i<=(pow(2,s.length())-1);i++)
    {
        string temp="";
        for(int j=0;j<s.length();j++)
        {
            if(i&(1<<j))
            temp=temp+s.at(j);
        }
        cout<<temp<<endl;
    }
}
int main(){
    string s="abc";
    power_set(s);
    return 0;
}