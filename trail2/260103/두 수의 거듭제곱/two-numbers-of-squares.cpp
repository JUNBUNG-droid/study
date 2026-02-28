#include <iostream>

using namespace std;

int a, b;

int num(int a, int b){
    int n=1;
    for(int i=0; i<b; i++){
        n*=a;
    }
    return n;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << num(a,b);

    return 0;
}