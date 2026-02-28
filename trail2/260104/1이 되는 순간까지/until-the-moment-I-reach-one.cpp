#include <iostream>

using namespace std;

int N, cnt=0;

int F(int n){
    if(n==1){
        return cnt;
    }
    if(n%2==0){
        n/=2;
        cnt++;
    }
    else{
        n/=3;
        cnt++;
    }
    return F(n);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << F(N);

    return 0;
}