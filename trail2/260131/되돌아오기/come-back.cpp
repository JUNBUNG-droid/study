#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

int main() {
    cin >> N;
    int x=0, y=0;
    int dir_num=0;
    int time=0;
    bool finish=false;
    for (int i = 0; i < N && !finish; i++) {
        cin >> dir[i] >> dist[i];
        if(dir[i]=='N') dir_num=3;
        else if(dir[i]=='E') dir_num=0;
        else if(dir[i]=='S') dir_num=1;
        else if(dir[i]=='W') dir_num=2;
        
        for(int j=0; j<dist[i]; j++){
            x+=dx[dir_num];
            y+=dy[dir_num];
            time++;
            if(x==0&&y==0){
                finish=true;
                break;
            } 
        }
    }

    // Please write your code here.
    if(!finish){
        cout << -1;
    } else {
        cout << time;
    }

    return 0;
}