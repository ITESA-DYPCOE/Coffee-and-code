#include<bits/stdc++.h>
using namespace std;
void two_odd(vector <int> v)
{
    int x=0;
    for(auto val:v)
    x=x^val;   //finding the xor of all will give us the xor of the odd ones occuring

    x=x&~(x-1); //here we are find the number with only the first different bit (b/w two numbers) set.  
    
    /* the first set bit of xor represents the difference between the two odd occuring element. That bit will be set in 
                   one number and not in the other so we find them by using this concept */

    int f=0,s=0;
    for(auto val:v)
    {
        if((x&val)!=0)
        f=f^val;
        else
        s=s^val;
    }
    cout<<"TWO ODD OCCURING ELEMENTS ARE :"<<f<<" and "<<s<<endl;
}
int main(){
    vector <int> v;
    v={1,2,2,3,3,3,4,4};
    two_odd(v);
    return 0;
}