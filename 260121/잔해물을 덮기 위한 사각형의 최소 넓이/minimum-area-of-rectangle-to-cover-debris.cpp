#include <iostream>

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int area[2001][2001];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    for(int i=0; i<2; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                if(i==0){
                    area[j+1000][k+1000]=1;
                }
                else if(i==1){
                    if(area[j+1000][k+1000]==1){
                        continue;
                    }
                    area[j+1000][k+1000]=2;
                }
            }
        }
    }
    int cnt=0;
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(area[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}