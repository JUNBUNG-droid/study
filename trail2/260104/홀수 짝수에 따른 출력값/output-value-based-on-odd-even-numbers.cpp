#include <iostream>

using namespace std;

int N;
int sum(int n){
    if(n==1){
        return 1;
    }
    if (n==2){
        return 2;
    }
    return n+sum(n-2);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << sum(N);
    return 0;
}