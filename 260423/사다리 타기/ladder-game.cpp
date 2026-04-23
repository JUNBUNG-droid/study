#include <iostream>
#include <climits>

using namespace std;

int n, m;
int origin[17][21];        
int sub[17][21];           
int lineR[11], lineC[11];    
int originResult[11];      
int ans = INT_MAX;

void simulate(int ladder[17][21], int result[]) {
    for (int s = 0; s < n; s++) {
        int col = 2 * s;                  
        for (int row = 1; row <= m; row++) {
            if (col + 1 <= 2*n - 2 && ladder[row][col + 1] == 1)
                col += 2;                   
            else if (col - 1 >= 1 && ladder[row][col - 1] == 1)
                col -= 2;                 
        }
        result[s] = col / 2;
    }
}

void solve(int idx, int cnt) {
    if (cnt >= ans) return;                 

    if (idx == m) {
        int subResult[11];
        simulate(sub, subResult);
        for (int i = 0; i < n; i++)
            if (subResult[i] != originResult[i]) return;
        ans = cnt;
        return;
    }

    sub[lineR[idx]][lineC[idx]] = 1;
    solve(idx + 1, cnt + 1);
    sub[lineR[idx]][lineC[idx]] = 0;       
    solve(idx + 1, cnt);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int r = b, c = 2 * a - 1;     
        origin[r][c] = 1;
        lineR[i] = r;
        lineC[i] = c;
    }

    simulate(origin, originResult);         
    solve(0, 0);

    cout << ans;
    return 0;
}