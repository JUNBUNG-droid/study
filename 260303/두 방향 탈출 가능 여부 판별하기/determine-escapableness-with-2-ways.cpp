#include <iostream>

using namespace std;

int n, m;
int grid[100][100];
int visited[100][100]={};
int dr[2]={0,1};
int dc[2]={1,0};

bool inrange(int x, int y){
    return 0<=x&&x<n&&0<=y&&y<m;
}

bool cango(int x, int y){
    if(!inrange(x, y)) return false;
    if(visited[x][y]||grid[x][y]==0) return false;
    return true;
}

void DFS(int r, int c){
    visited[r][c]=1;

    for(int i=0; i<2; i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(cango(nr,nc)){
            DFS(nr,nc);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    DFS(0,0);
    if(visited[n-1][m-1]==1) cout << 1;
    else cout << 0;
    return 0;
}
