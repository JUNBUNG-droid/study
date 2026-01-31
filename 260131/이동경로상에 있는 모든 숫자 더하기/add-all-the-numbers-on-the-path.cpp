#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

bool isrange(int x, int y){
    return (0<=x&&x<N)&&(0<=y&&y<N);
}

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    // Please write your code here.
    int num_dir=0, x=N/2, y=N/2, sum=board[y][x];
    for(int i=0; i<str.length(); i++){
        if(str[i]=='L') num_dir=(num_dir+3)%4;
        else if(str[i]=='R') num_dir=(num_dir+1)%4;
        else if(str[i]=='F'){
            int nr=y+dy[num_dir];
            int nc=x+dx[num_dir];
            if(isrange(nr,nc)){
                y=nr;
                x=nc;
                sum+=board[y][x];
            }
        }
    }

    cout << sum;

    return 0;
}