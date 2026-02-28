#include <iostream>
#include <string>

using namespace std;

string commands;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main() {
    cin >> commands;

    // Please write your code here.
    int x=0, y=0, time=0;
    int dir_num=0;
    for(int i=0; i<commands.length(); i++){
        if(commands[i]=='R'){
            dir_num=(dir_num+1)%4;
            time++;
        }
        else if(commands[i]=='L'){
            dir_num=(dir_num+3)%4;
            time++;
        }
        else if(commands[i]=='F'){
            x+=dx[dir_num];
            y+=dy[dir_num];
            time++;
        }
        if(x==0&&y==0){
            cout << time;
            return 0;
        }
    }

    cout << -1;
    return 0;
}