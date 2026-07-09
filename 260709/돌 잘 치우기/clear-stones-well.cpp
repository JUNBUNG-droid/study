#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Pos{
    public:
        int r, c;

    Pos(){}

    Pos(int r, int c){
        this->r=r;
        this->c=c;
    }
};

int N, K, M, r, c;
int num;
int ans;
int map[100][100];
Pos stone[8];
Pos start[10000];
vector<int> v;

int dr[4]={-1, 1, 0, 0};
int dc[4]={0, 0, -1, 1};

void bfs(){
    int temp[100][100];
    bool visited[100][100];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            temp[i][j]=map[i][j];
            visited[i][j]=false;
        }
    }

    for(int i=0; i<M; i++){
        temp[stone[v[i]].r][stone[v[i]].c]=0;
    }

    queue<Pos> q;
    int cnt=0;

    for(int i=0; i<K; i++){
        int sr=start[i].r;
        int sc=start[i].c;
        if(temp[sr][sc]==1) continue;
        if(visited[sr][sc]) continue;
        visited[sr][sc]=true;
        cnt++;
        q.push(Pos(sr, sc));
    }

    while(!q.empty()){
        Pos cur=q.front();
        q.pop();
        for(int d=0; d<4; d++){
            int nr=cur.r+dr[d];
            int nc=cur.c+dc[d];
            if(nr<0 || nr>=N || nc<0 || nc>=N) continue;
            if(temp[nr][nc]==1) continue;
            if(visited[nr][nc]) continue;
            visited[nr][nc]=true;
            cnt++;
            q.push(Pos(nr, nc));
        }
    }

    if(cnt>ans) ans=cnt;
}

void choose(int idx, int startNum){
    if(idx==M){
        bfs();
        return;
    }
    for(int i=startNum; i<num; i++){
        v.push_back(i);
        choose(idx+1, i+1);
        v.pop_back();
    }
}

int main() {
    cin>>N>>K>>M;
    num=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>map[i][j];
            if(map[i][j]==1){
                stone[num]=Pos(i, j);
                num++;
            }
        }
    }

    for(int i=0; i<K; i++){
        cin>>r>>c;
        start[i]=Pos(r-1, c-1);   
    }

    choose(0, 0);
    cout<<ans;
    return 0;
}