#include <iostream>

using namespace std;

int N;

int pib(int n){
    if(n==1){
        return 1;
    }
    else if(n<=0){
        return 0;
    }
    return pib(n-1)+pib(n-2);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << pib(N);

    return 0;
}