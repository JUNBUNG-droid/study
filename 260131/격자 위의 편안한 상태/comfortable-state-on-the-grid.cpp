#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
int map[100][100]={};

bool isrange(int x, int y){
    return (0<=x&&x<N)&&(0<=y&&y<N);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int cnt=0;
        cin >> r[i] >> c[i];
        map[r[i]-1][c[i]-1]=1;
        for(int j=0; j<4; j++){
            int ny=r[i]-1+dy[j];
            int nx=c[i]-1+dx[j];
            if(isrange(nx,ny)&&map[ny][nx]==1) cnt++;
        }
        if(cnt==3) cout << 1 << "\n";
        else cout << 0 << "\n";
    }

    // Please write your code here.

    return 0;
}