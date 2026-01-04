#include <iostream>

using namespace std;

int N;

int F(int n) {
    if(n < 10)
        return n*n;

    return F(n / 10) + (n % 10)*(n % 10);
}

int main() {
    cin >> N;
    cout << F(N);
    return 0;
}

