#include <iostream>

using namespace std;

int n, m;
int arr[100][100];
int used[100][100]={};

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool isrange(int x, int y){
    return (0<=x&&x<m)&&(0<=y&&y<n);
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int cnt=1, x=0, y=0;
    int dir_num=0;
    arr[y][x]=cnt++;
    used[y][x]=true;

    for(int i=1; i<n*m; i++){
        int nx=x+dx[dir_num];
        int ny=y+dy[dir_num];
        if(!(isrange(nx,ny)&&used[ny][nx]==false)){
            dir_num=(dir_num+1)%4; 
        }
        x+=dx[dir_num];
        y+=dy[dir_num];
        used[y][x]=true;
        arr[y][x]=cnt++;   
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}