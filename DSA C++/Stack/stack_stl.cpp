//stack implementation using stl
#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;

    for(int i=0;i<=5;i++){
        s.push(i);
    }

    //print stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}