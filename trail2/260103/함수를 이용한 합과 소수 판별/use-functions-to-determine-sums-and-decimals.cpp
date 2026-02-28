#include <iostream>

using namespace std;

int a, b;

int cal(int n){
    string str = to_string(n);
    int sum=0;
    for(int i=0; i<str.length(); i++){
        sum+=str[i]-'0';
    }
    return sum;
}

bool cal2(int n){
    bool a = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a = false;
        }
    }
    if(a){
        if(cal(n)%2==0){
            return true;
        }
    }
    return false;
}

int main() {
    cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(cal2(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}