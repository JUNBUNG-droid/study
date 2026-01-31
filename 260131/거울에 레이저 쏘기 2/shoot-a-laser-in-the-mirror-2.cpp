#include <iostream>
using namespace std;

int n;
char grid[1000][1000];
int k;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

class Start {
    public:
        int x, y, dir;
    Start(int x, int y, int dir){
        this->x=x;
        this->y=y;
        this->dir=dir;
    }
    Start(){}
};

Start start[4000];

bool isrange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    for(int i = 0; i < n; i++) {
        start[i] = Start(i, 0, 2);       
        start[i + n] = Start(0, i, 1);   
        start[i + 2*n] = Start(n-i-1, n-1, 0); 
        start[i + 3*n] = Start(n-1, n-i-1, 3); 
    }

    for(int i = 0; i < n; i++) {
        start[i] = Start(i, 0, 2);       
        start[i + n] = Start(0, i, 1);   
        start[i + 2*n] = Start(n-i, n-1, 0);   
        start[i + 3*n] = Start(n-1, n-i, 3);   
    }

    int x = start[k - 1].x;
    int y = start[k - 1].y;
    int dir = start[k - 1].dir;

    int cnt = 0;

    while(isrange(x, y)) {
        if(grid[y][x] == '\\') {
            dir = 3 - dir;
        }
        else if(grid[y][x] == '/') {
            dir ^= 1;
        }

        x += dx[dir];
        y += dy[dir];
        cnt++;
    }

    cout << cnt;
    return 0;
}