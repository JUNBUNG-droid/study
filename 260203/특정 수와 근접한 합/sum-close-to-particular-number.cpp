#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int n1 = 0, n2 = 1, minus = INT_MAX;

    while (true) {
        if (n1 == N - 1 && n2 == N )
            break;

        int sum = 0;
        for (int i = 0; i < N; i++) {
            if (i == n1 || i == n2) continue;
            sum += arr[i];
        }

        if (minus > abs(S - sum))
            minus = abs(S - sum);

        if (n2 == N - 1) {
            n1++;
            n2 = n1;
        }
        n2++;
    }
    cout << minus;
}