#include <iostream>
#include <queue>
using namespace std;

class Ball {
public:
    int id;   
    int speed;

    Ball() {}
    Ball(int id, int speed) {
        this->id = id;
        this->speed = speed;
    }

    bool operator<(const Ball& other) const {
        if (speed != other.speed) return speed < other.speed; 
        return id < other.id;                         
    }
};

int n, m, t, k;
int r[2500], c[2500];
int d[2500];            
int v[2500];
bool alive[2500];
int dx[4] = {-1, 0, 1, 0};   
int dy[4] = { 0, 1, 0, -1};  

int dirIdx(char ch) {
    if (ch == 'U') return 0;
    if (ch == 'R') return 1;
    if (ch == 'D') return 2;
    return 3;
}

void simulate() {
    if (n == 1) return; 

    for (int i = 0; i < m; i++) {
        if (!alive[i]) continue;

        for (int j = 0; j < v[i]; j++) {
            int nr = r[i] + dx[d[i]];
            int nc = c[i] + dy[d[i]];

            if (nr < 1 || nr > n || nc < 1 || nc > n) {
                d[i] = (d[i] + 2) % 4; 
                nr = r[i] + dx[d[i]];
                nc = c[i] + dy[d[i]];
            }
            r[i] = nr;
            c[i] = nc;
        }
    }
}

priority_queue<Ball> pq[51][51];

void check() {
    for (int i = 0; i < m; i++) {
        if (!alive[i]) continue;
        pq[r[i]][c[i]].push(Ball(i, v[i]));
        alive[i] = false; 
    }

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            int cnt = 0;
            while (!pq[x][y].empty()) {
                Ball b = pq[x][y].top();
                pq[x][y].pop();
                if (cnt < k) {
                    alive[b.id] = true;
                    cnt++;
                }
            }
        }
    }
}

int main() {
    cin >> n >> m >> t >> k;

    for (int i = 0; i < m; i++) {
        char ch;
        cin >> r[i] >> c[i] >> ch >> v[i];
        d[i] = dirIdx(ch);
        alive[i] = true;
    }

    for (int sec = 0; sec < t; sec++) {
        simulate(); 
        check();  
    }

    int ans = 0;
    for (int i = 0; i < m; i++) if (alive[i]) ans++;
    cout << ans << "\n";
    return 0;
}