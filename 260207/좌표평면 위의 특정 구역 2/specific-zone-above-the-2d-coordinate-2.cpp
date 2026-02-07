#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < N; i++) {

        int minX = INT_MAX, maxX = INT_MIN;
        int minY = INT_MAX, maxY = INT_MIN;

        for (int j = 0; j < N; j++) {
            if (j == i) continue;  

            minX = min(minX, x[j]);
            maxX = max(maxX, x[j]);
            minY = min(minY, y[j]);
            maxY = max(maxY, y[j]);
        }

        int area = (maxX - minX) * (maxY - minY);
        ans = min(ans, area);
    }

    cout << ans;
}