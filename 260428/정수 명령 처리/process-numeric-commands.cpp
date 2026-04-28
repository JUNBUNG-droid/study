#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.
    stack<int> s;
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        string str;
        cin>>str;
        if(str=="push"){
            int a;
            cin>>a;
            s.push(a);
        }
        else if(str=="pop"){
            cout<<s.top()<<"\n";
            s.pop();
        } 
        else if(str=="size") cout<<s.size()<<"\n";
        else if(str=="empty"){
            if(s.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(str=="top") cout<<s.top()<<"\n";
    }
    return 0;
}