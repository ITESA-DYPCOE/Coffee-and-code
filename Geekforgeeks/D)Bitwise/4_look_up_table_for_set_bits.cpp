#include<bits/stdc++.h>
using namespace std;
int table[256];
void initialize()
{
    table[0]=0;
    for(int i=1;i<256;i++)
    {
        table[i]=(i&1)+table[i/2];
    }
}
int count(int32_t n)
{
    initialize(); //in this function we are initializing the number of sets bits in numbers from 0 to 255
    int res=0;
    res=table[n&0xff];  //here we are breaking the number in 8 bits and then find its set bits
    n=n>>8;
    res+=table[n&0xff];
    n=n>>8;
    res+=table[n&0xff];
    n=n>>8;
    res+=table[n&0xff];
    return res;
}
int main(){
    cout<<"NUMBER OF SET BITS : "<<count(255)<<endl;
    return 0;
}