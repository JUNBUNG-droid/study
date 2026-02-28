#include <iostream>

using namespace std;

string dirs;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main() {
    cin >> dirs;

    // Please write your code here.
    int x=0, y=0;
    int dir_num=0;

    for(int i=0; i<dirs.length(); i++){
        if(dirs[i]=='L'){
            dir_num=(dir_num+3)%4;
        }
        else if(dirs[i]=='R'){
            dir_num=(dir_num+1)%4;
        }
        if(dirs[i]=='F'){
            x+=dx[dir_num];
            y+=dy[dir_num];
        }
    }

    cout << x << " " << y;

    return 0;
}