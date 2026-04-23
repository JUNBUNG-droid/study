#include <iostream>
#include <algorithm>
using namespace std;

int n, m, c, ans;
int arr[10][10];
int cur_best;

void pick(int temp[], int idx, int wsum, int vsum) {
    if (wsum > c) return;
    if (idx == m) {
        cur_best = max(cur_best, vsum);
        return;
    }
    int w = temp[idx];
    pick(temp, idx + 1, wsum + w, vsum + w * w);
    pick(temp, idx + 1, wsum, vsum);
}

int cal(int temp[]) {
    cur_best = 0;
    pick(temp, 0, 0, 0);
    return cur_best;
}

int main() {
    cin >> n >> m >> c;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int temp1[5], temp2[5];
        for (int j1 = 0; j1 + m <= n; j1++) {
            for (int k = 0; k < m; k++) temp1[k] = arr[i][j1 + k];
            for (int j2 = j1 + m; j2 + m <= n; j2++) {
                for (int k = 0; k < m; k++) temp2[k] = arr[i][j2 + k];
                ans = max(ans, cal(temp1) + cal(temp2));
            }
        }
    }

    for (int i1 = 0; i1 < n; i1++) {
        for (int i2 = i1 + 1; i2 < n; i2++) {
            int temp1[5], temp2[5];
            for (int j1 = 0; j1 + m <= n; j1++) {
                for (int k = 0; k < m; k++) temp1[k] = arr[i1][j1 + k];
                for (int j2 = 0; j2 + m <= n; j2++) {
                    for (int k = 0; k < m; k++) temp2[k] = arr[i2][j2 + k];
                    ans = max(ans, cal(temp1) + cal(temp2));
                }
            }
        }
    }

    cout << ans;
    return 0;
}