#include <iostream>

using namespace std;

int n;
int grid[100][100];
int visited[100][100]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

bool cango(int r, int c, int n){
    if(!inrange(r, c)) return false;
    if(visited[r][c]||grid[r][c]!=n) return false;
    return true;
}

int DFS(int r, int c, int n){
    visited[r][c]=1;
    int cnt=1;
    for(int i=0; i<4; i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(cango(nr, nc, n)){
            cnt+=DFS(nr, nc, n);
        }
    }
    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int num;
    int bomb=0;
    int max_block=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int block=0;
            if(!visited[i][j]){
                num=grid[i][j];
                block=DFS(i, j, num);
            } 
            if(block>=4){
                bomb++;    
            }
            if(max_block<block){
                max_block=block;
            }
        }
    }
    cout << bomb << " " << max_block;
    return 0;
}
