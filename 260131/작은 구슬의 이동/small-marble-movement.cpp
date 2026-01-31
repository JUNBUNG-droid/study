#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};

bool isrange(int x, int y){
    return (0<x&&x<=n)&&(0<y&&y<=n);
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;
    
    // Please write your code here.
    int dir_num=0;
    if(d=='L'){
        dir_num=2;
    }
    else if(d=='R'){
        dir_num=1;
    }
    else if(d=='U'){
        dir_num=0;
    }
    else if(d=='D'){
        dir_num=3;
    }
    int x=r, y=c;
    for(int i=0; i<t; i++){
        int row=x+dy[dir_num];
        int col=y+dx[dir_num];
        if(!isrange(row,col)){
            dir_num=3-dir_num;
        }
        else{
            x=row;
            y=col;
        }
    }
    cout << x << " " << y;
    return 0;
}