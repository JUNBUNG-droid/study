#include <iostream>

using namespace std;

int n;

void printstar(int n){
    if(n==0){
        return;
    }
    for(int i=0; i<n; i++){
        cout << "* ";
    }
    cout << "\n";
    printstar(n-1);
    for(int i=0; i<n; i++){
        cout << "* ";
    }
    cout << "\n";
}

int main() {
    cin >> n;

    // Please write your code here.
    printstar(n);

    return 0;
}