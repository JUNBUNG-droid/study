#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

bool inrange(int x, int y){
    return (x>=0&&x<n)&&(y>=0&&y<n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int ans=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt=0;
            for(int k=0; k<4; k++){
                int nx=i+dx[k];
                int ny=j+dy[k];                
                if(inrange(nx,ny)&&grid[nx][ny]==1) cnt++;
            }
        if(cnt>=3) ans++;
        }
    }
    cout << ans;

    return 0;
}