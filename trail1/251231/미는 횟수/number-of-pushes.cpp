#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    int cnt=0;
    cin >> a >> b;
    for(int i=0; i<a.length(); i++){
        if(a==b){
            break;
        }
        a = a.substr(a.length()-1,1)+a.substr(0,a.length()-1);
        cnt++;
    }
    if(a!=b){
        cout << -1;
    }
    else{
        cout << cnt;
    }
    return 0;
}