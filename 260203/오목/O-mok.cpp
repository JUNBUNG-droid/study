#include <iostream>

using namespace std;

int board[19][19];
int dx[8]={0,1,1,1,-1,-1,-1,0};
int dy[8]={-1,-1,0,1,-1,0,1,1};

bool isrange(int x, int y){
    return (0<=x&&x<19)&&(0<=y&&y<19);
}

int check5(int i, int j, int a){
    int cnt=1;
    for(int k=0; k<4; k++){
        int nr=i, nc=j, nr2=i, nc2=j;
        for(int l=0; l<2; l++){
            nr+=dy[k];
            nc+=dx[k];
            nr2+=dy[7-k];
            nc2+=dx[7-k];
            if(isrange(nr,nc)&&board[nr][nc]==a&&isrange(nr2,nc2)&&board[nr2][nc2]==a){
                cnt+=2;
            }
            else{
                break;
            }
        }
        if(cnt!=5) cnt=1;
    }
    return cnt;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    // Please write your code here.
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            if(board[i][j]==1){
                int p1=check5(i,j,1);
                if(p1==5){         
                    cout << 1 << "\n" << i+1 << " " << j+1;
                    return 0;
                } 
            }
            else if(board[i][j]==2){
                int p2=check5(i,j,2);
                if(p2==5){        
                    cout << 2 << "\n" << i+1 << " " << j+1;
                    return 0;
                } 
            }
        }
    }

    cout << 0;
    return 0;
}