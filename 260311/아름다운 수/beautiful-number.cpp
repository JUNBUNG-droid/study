#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> v;

int choose(int a) {
    if (a == n) return 1;

    if (a > n) return 0;

    int ans = 0;

    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            v.push_back(i);
        }

        ans += choose(a + i);

        for (int j = 0; j < i; j++) {
            v.pop_back();
        }
    }

    return ans;
}

int main() {
    cin >> n;
    cout << choose(0);
    return 0;
}