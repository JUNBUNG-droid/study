#include <iostream>

using namespace std;

int N;

int a(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 4;
    }
    return a(n-1)*a(n-2)%100;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << a(N);

    return 0;
}