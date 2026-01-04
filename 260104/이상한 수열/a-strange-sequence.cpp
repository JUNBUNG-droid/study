#include <iostream>

using namespace std;

int N;

int a(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return a(n/3)+a(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << a(N);

    return 0;
}