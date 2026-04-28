#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.
    stack<char> s;
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='(') s.push('(');
        else{
            if(s.empty()){
                cout<<"No";
                return 0;
            }
            else s.pop();
        }
    }
    if(s.size()>0) cout<<"No";
    else cout<<"Yes";
    return 0;
}