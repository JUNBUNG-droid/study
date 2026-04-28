#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num[10000];
deque<int> d;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front") {
            cin >> num[i];
            d.push_front(num[i]);
        }
        else if(cmd[i] == "push_back"){
            cin>>num[i];
            d.push_back(num[i]);
        }
        else if(cmd[i]=="pop_front"){
            cout<<d.front()<<"\n";
            d.pop_front();
        }
        else if(cmd[i]=="pop_back"){
            cout<<d.back()<<"\n";
            d.pop_back();
        }
        else if(cmd[i]=="size") cout<<d.size()<<"\n";
        else if(cmd[i]=="empty") cout<<d.empty()<<"\n";
        else if(cmd[i]=="front") cout<<d.front()<<"\n";
        else if(cmd[i]=="back") cout<<d.back()<<"\n";
    }

    // Please write your code here.

    return 0;
}
