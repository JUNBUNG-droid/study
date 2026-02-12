#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string str;
char c;

int main() {
    // Please write your code here.
    cin >> n >> m >> str;
    list<char> l;
    list<char>::iterator it;

    for(int i=0; i<n; i++){
        l.push_back(str[i]);
    }
    it=l.end();
    for(int i=0; i<m; i++){
        cin >> c;
        if(c=='L'){
            if(it!=l.begin()) it--;
        }
        else if(c=='P'){
            char t;
            cin >> t;
            l.insert(it,t);
        }
        else if(c=='R'){
            if(it!=l.end()) it++;
        }
        else if(c=='D'){
            if(it!=l.end()) it=l.erase(it);     
        }
    }

    for(it=l.begin(); it!=l.end(); it++){
        cout << *it;
    }
    return 0;
}