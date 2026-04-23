#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int n, m;
int line_c[11];                
bool picked[11];            
int origin_result[11];
int ans = INT_MAX;


void simulate(int result[], bool use_all) {
    for (int i = 0; i < n; i++) result[i] = i;
    for (int i = 0; i < m; i++) {
        if (!use_all && !picked[i]) continue;
        swap(result[line_c[i]], result[line_c[i] + 1]);
    }
}

void solve(int idx, int cnt) {
    if (cnt >= ans) return;

    if (idx == m) {
        int sub_result[11];
        simulate(sub_result, false);
        for (int i = 0; i < n; i++)
            if (sub_result[i] != origin_result[i]) return;
        ans = cnt;
        return;
    }

    picked[idx] = true;
    solve(idx + 1, cnt + 1);
    picked[idx] = false;
    solve(idx + 1, cnt);
}

int main() {
    cin >> n >> m;

    pair<int,int> tmp[11];    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        tmp[i] = {b, a - 1};
    }
    sort(tmp, tmp + m);       

    for (int i = 0; i < m; i++)
        line_c[i] = tmp[i].second;

    simulate(origin_result, true);
    solve(0, 0);

    cout << ans;
    return 0;
}