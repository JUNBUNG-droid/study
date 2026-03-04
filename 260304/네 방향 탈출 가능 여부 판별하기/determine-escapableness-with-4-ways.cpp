#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, m;
int a[100][100];
int visited[100][100]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
queue<pair<int, int>> q;

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<m;
}

bool cango(int r, int c){
    if(!inrange(r,c)) return false;
    if(visited[r][c]||!a[r][c]) return false;
    return true;
}

void BFS(){
    visited[q.front().first][q.front().second]=1;
    while(!q.empty()){
        for(int i=0; i<4; i++){
            int nr=q.front().first+dr[i];
            int nc=q.front().second+dc[i];
            if(cango(nr,nc)){
                visited[nr][nc]=1;
                q.push(make_pair(nr,nc));
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    q.push(make_pair(0,0));
    BFS();
    if(visited[n-1][m-1]==1) cout << 1;
    else cout << 0;
    return 0;
}
