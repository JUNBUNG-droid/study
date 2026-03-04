#include <iostream>

using namespace std;

int N, M;
int grid[50][50];
int sink[50][50]={};
int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};

bool inrange(int r, int c){
    return 0<=r&&r<N&&0<=c&&c<M;
}

bool cango(int r, int c){
    if(!inrange(r,c)) return false;
    if(sink[r][c]==2||sink[r][c]==1) return false;
    return true;
}

void DFS(int r, int c){
    sink[r][c]=1;
    for(int i=0; i<4; i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(cango(nr,nc)){
            DFS(nr,nc);
        }
    }
}

void clean(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            sink[i][j]=0;
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int h=0;
    int max_vil=-1;
    for(int k=1; k<101; k++){
        int vil=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(grid[i][j]<=k) sink[i][j]=2;
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(sink[i][j]==0){
                    DFS(i,j);
                    vil++;
                } 
            }
        }   
        if(max_vil<vil) max_vil=vil;
        else{
            h=k-1;
            break;
        }
        clean();
    }
    cout << h << " " << max_vil;
    return 0;
}
