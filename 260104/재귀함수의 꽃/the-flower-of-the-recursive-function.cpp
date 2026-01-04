#include <iostream>

using namespace std;

int N;

void printnum(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printnum(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;

    // Please write your code here.
    printnum(N);

    return 0;
}