#include <iostream>
using namespace std;

int n;

int choose(int a) {
    if (a == n) return 1;   
    if (a > n) return 0;    

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += choose(a + i);
    }
    return ans;
}

int main() {
    cin >> n;
    cout << choose(0);
    return 0;
}