#include <iostream>

using namespace std;

int a, b;

bool isnum2(int n){
    string str=to_string(n);
    for(int i=0; i<str.length(); i++){
        if(str[i]=='3'||str[i]=='6'||str[i]=='9'){
            return true;
        }
    }
    return 0;
}

bool isnum(int n){
    return n%3==0||isnum2(n);
}

int main() {
    cin >> a >> b;
    int cnt=0;
    // Please write your code here.
    for(int i=a; i<=b; i++){
        if(isnum(i)){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}