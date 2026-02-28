#include <iostream>

using namespace std;

int N;

void printnum(int n){
    if(n==0){
        return;
    }
    printnum(n-1);
    cout << n << " ";
}
void printnum2(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    printnum2(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    printnum(N);
    cout << "\n";
    printnum2(N);

    return 0;
}