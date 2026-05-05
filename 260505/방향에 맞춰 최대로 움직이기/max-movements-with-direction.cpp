#include <iostream>
using namespace std;

class Pos{
    public:
        int val, dir;
    Pos(int val, int dir){
        this->val=val;
        this->dir=dir;
    }
    Pos(){}
};

int dr[8]={-1,-1,0,1,1,1,0,-1};
int dc[8]={0,1,1,1,0,-1,-1,-1};
int n, r, c, ans;
int arr[4][4];
Pos pos[4][4];

bool isrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

void move(int r, int c, int cnt){
    if(ans<cnt) ans=cnt;
    int val=pos[r][c].val;
    int dir=pos[r][c].dir-1;
    int nr=r;
    int nc=c;
    while(true){
        nr+=dr[dir];
        nc+=dc[dir];
        if(!isrange(nr, nc)) break;
        if(val>pos[nr][nc].val) continue;
        move(nr, nc, cnt+1);
    }
}

int main() {
    // Please write your code here.
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int dir;
            cin>>dir;
            pos[i][j]=Pos(arr[i][j], dir);
        }
    }   
    cin>>r>>c;
    move(r-1, c-1, 0);
    cout<<ans;
    return 0;
}