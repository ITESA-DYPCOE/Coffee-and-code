#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool isValid(char *s){
    stack<char> stk;
    for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        if(ch=='(')stk.push(ch);
        else if(ch==')'){
            if(stk.empty() || stk.top()!='('){
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}
int main(){
    
    char s[100]="((a+b)+(c-d+e)*)(f";
    if(isValid(s))cout<<"true";
    else cout<<"False";
    return 0;
}