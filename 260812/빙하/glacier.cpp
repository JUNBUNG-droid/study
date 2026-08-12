#include <iostream>
#include <queue>

using namespace std;

class Pos{
    public:
        int row, col;
    Pos (int row, int col){
        this->row=row;
        this->col=col;
    }
};                              

int ice[200][200];
bool visited[200][200];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int n, m, t, ans;               
queue<Pos> q;                  
queue<Pos> melt;               

void bfs(){                     
    while (true) {
        while (!q.empty()) {
            Pos cur = q.front();
            q.pop();
            for (int d = 0; d < 4; d++) {
                int nr = cur.row + dr[d];
                int nc = cur.col + dc[d];
                if (nr<0 || nr>=n || nc<0 || nc>=m || visited[nr][nc]) continue;
                visited[nr][nc] = true;
                if (ice[nr][nc] == 0) q.push(Pos(nr, nc));
                else melt.push(Pos(nr, nc));
            }
        }
        if (melt.empty()) break;   


        ans = melt.size();        
        t++;
        while (!melt.empty()) {
            Pos cur = melt.front();
            melt.pop();
            ice[cur.row][cur.col] = 0;
            q.push(cur);        
        }
    }
}

int main() {
    cin >> n >> m;               
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ice[i][j];

    visited[0][0] = true;
    q.push(Pos(0, 0));             
    bfs();

    cout << t << " " << ans;
    return 0;
}