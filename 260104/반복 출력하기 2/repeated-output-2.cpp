#include <iostream>

using namespace std;

int N;

void printhello(int n){
    if(n==0){
        return;
    }
    printhello(n-1);
    cout << "HelloWorld" << "\n";
    
}

int main() {
    cin >> N;

    // Please write your code here.
    printhello(N);

    return 0;
}