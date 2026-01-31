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

    int idxr = n - 1, idxc = n - 1;
    for(int i = 0; i < 4 * n; i++) {
        if(i < n) {
            start[i] = Start(i, 0, 2);
        }
        else if(i < 2 * n) {
            start[i] = Start(0, i - n, 1);
        }
        else if(i < 3 * n) {
            start[i] = Start(idxc--, n - 1, 0);
        }
        else {
            start[i] = Start(n - 1, idxr--, 3);
        }
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