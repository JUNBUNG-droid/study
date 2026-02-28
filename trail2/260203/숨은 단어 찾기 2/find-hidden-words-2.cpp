#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50]={};
int dx[8]={0,1,1,1,-1,-1,-1,0};
int dy[8]={-1,-1,0,1,-1,0,1,1};

bool isrange(int x, int y){
    return (0<=x&&x<N)&&(0<=y&&y<M);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(arr[i][j]=='L'){
                for(int k=0; k<8; k++){
                    int nr=i;
                    int nc=j;
                    int ecnt=0;
                    for(int l=0; l<2; l++){
                        nr+=dy[k];
                        nc+=dx[k];
                        if(isrange(nr,nc)&&arr[nr][nc]=='E'){
                            ecnt++;
                        }
                    }
                    if(ecnt==2) cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}