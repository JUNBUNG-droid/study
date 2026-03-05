#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, k;
int grid[100][100];
int r, c;
int visited[100][100]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
queue<pair<int, int>> q;

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

bool cango(int r, int c){
    if(!inrange(r, c)) return false;
    if(visited[r][c]||grid[r][c]) return false;
    return true;
}

void BFS(int r, int c){
    visited[r][c]=1;
    while(!q.empty()){
        for(int i=0; i<4; i++){
            int nr=q.front().first+dr[i];
            int nc=q.front().second+dc[i];
            if(cango(nr,nc)){
                q.push(make_pair(nr,nc));
                visited[nr][nc]=1;
            }
        }
        q.pop();
    }
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    for (int i = 0; i < k; i++){
        cin >> r >> c;
        q.push(make_pair(r-1,c-1));
        BFS(r-1,c-1);
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
