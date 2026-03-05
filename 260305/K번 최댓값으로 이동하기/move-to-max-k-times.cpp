#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, k;
int grid[100][100];
int visited[100][100]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
queue<pair<int, int>> q;
int r, c;

void clean(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            visited[i][j]=0;
        }
    }
}

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

bool cango(int n, int r, int c){
    if(!inrange(r, c)) return false;
    if(visited[r][c]) return false;
    if(grid[r][c] >= n) return false;
    return true;
}

int BFS(int r, int c){
    int cnt=1;
    q.push(make_pair(r,c));
    visited[r][c]=1;
    while(!q.empty()){
        for(int i=0; i<4; i++){
            int nr=q.front().first+dr[i];
            int nc=q.front().second+dc[i];
            if(cango(grid[r][c], nr, nc)){
                q.push(make_pair(nr,nc));
                visited[nr][nc]=1;
                cnt++;
            }
        }
        q.pop();
    }
    return cnt;
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> r >> c;

    // Please write your code here.
    int x=r-1, y=c-1;
    for(int i=0; i<k; i++){
        int max_v=-1;
        int a = BFS(x, y);
        int nx=x;
        int ny=y;
        if(a==1) break;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(!visited[j][k]) continue;
                if(grid[j][k]==grid[x][y]) continue;
                if(grid[j][k]>max_v){
                    nx=j;
                    ny=k;
                    max_v=grid[j][k];
                }
            }
        }
        x=nx;
        y=ny;
        clean();
    }
    cout << x+1 << " " << y+1;
    return 0;
}
