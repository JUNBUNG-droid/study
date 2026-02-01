#include <iostream>

using namespace std;

int R, C;
char grid[15][15];

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int cnt=0;

    if(grid[0][0]==grid[R-1][C-1]){
        cout << 0;
        return 0;
    }

    for(int i=1; i<R-2; i++){
        for (int j=1; j<C-2; j++) {
        if (grid[i][j] == grid[0][0]) continue;
            for(int k=i+1; k<R-1; k++){
                for(int l=j+1; l<C-1; l++){
                    if (grid[k][l] == grid[i][j]) continue;
                    if (grid[k][l] == grid[R-1][C-1]) continue;
                    cnt++;
                }
            }
        }        
    }
    cout << cnt;
    return 0;
}