#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int k,char source='A',char auxillary='B',char destination='C')
{
    if(k==0)
    {
        return ;
    }
    tower_of_hanoi(k-1,source,destination,auxillary);
    cout<<"MOVING DISK "<<k<<" FROM "<<source<<" TO "<<destination<<endl;
    tower_of_hanoi(k-1,auxillary,source,destination);
}
int main(){
    tower_of_hanoi(4);
    return 0;
}