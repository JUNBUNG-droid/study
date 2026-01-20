#include <iostream>

using namespace std;

int N;
int x[10][10]={};
int main() {
    cin >> N;
    int x1, y1, x2, y2;
    for (int i = 0; i < N; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1; j<x2; j++){
            for(int k=y1; k<y2; k++){
                x[j][k]=1;
            }
        }
    }

    int cnt=0;
    // Please write your code here.
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(x[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}