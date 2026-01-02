#include <iostream>

using namespace std;

int a, b;

bool isprime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    cin >> a >> b;
    int sum=0;
    // Please write your code here.
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            sum+=i;
        }
    }
    cout << sum;

    return 0;
}