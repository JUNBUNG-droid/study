#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

bool isrange(int x, int y, int b){
    return (n/2-b<=x&&x<=n/2+b)&&(n/2-b<=y&&y<=n/2+b);
}

int main() {
    cin >> n;

    // Please write your code here.
    int x=n/2, y=n/2, dir_num=1, b=1, cnt=0;
    grid[y][x]=1;
    for(int i=2; i<=n*n; i++){
        int nr=y+dy[dir_num];
        int nc=x+dx[dir_num];
        if(!isrange(nc,nr,b)){
            dir_num=(dir_num+3)%4;
            cnt++;
            if(cnt%4==0) b++;
            nc = x + dx[dir_num];
            nr = y + dy[dir_num];
        } 
        x=nc;
        y=nr;
        grid[y][x]=i;         
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
