#include <iostream>

using namespace std;

int n;

int a(int n){
    if(n==1){
        return 0;
    }
    if(n%2==0){
        n/=2;
        return a(n)+1;
    }
    else{
        n*=3;
        n++;
        return a(n)+1;
    }
    return a(n)+1;
}

int main() {
    cin >> n;

    // Please write your code here.
    cout << a(n);

    return 0;
}