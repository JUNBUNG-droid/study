#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int grid[25][25];
int visited[25][25]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
vector<int> v;

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

bool cango(int r, int c){
    if(!inrange(r,c)) return false;
    if(visited[r][c]||grid[r][c]==0) return false;
    return true;
}

int DFS(int r, int c){
    int cnt=1;
    visited[r][c]=1;
    for(int i=0; i<4; i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(cango(nr,nc)){
            cnt+=DFS(nr,nc);
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
    int vil=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j]||grid[i][j]==0) continue;
            v.push_back(DFS(i,j));
            vil++;
        }
    }
    sort(v.begin(), v.end());
    cout << vil << "\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}
