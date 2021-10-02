#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void transfer(stack<int> &s1, stack<int> &s2,int n){
    for(int i=0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }
}
void reverseStack(stack<int> &s1){
    stack<int> s2;
    int n=s1.size();
    int i=0;
    for(int i=0;i<n;i++){
        //pick top element from stack
        int temp=s1.top();
        s1.pop();
        //transfer n-i-1 elements to s2 stack
        transfer(s1,s2,n-i-1);
        //insert temp into s1
        s1.push(temp);
        //transfer n-i-1 from s2 to s1 stack
        transfer(s2,s1,n-i-1);

    }
}
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    reverseStack(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
} 