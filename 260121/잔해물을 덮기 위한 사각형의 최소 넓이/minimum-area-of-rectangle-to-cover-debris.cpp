#include <iostream>
#include <algorithm>
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
                    area[j+1000][k+1000]=2;
                }
            }
        }
    }
    int idx=0;
    int x[2001]={}, y[2001]={};
    for(int i=0; i<2001; i++){
        for(int j=0; j<2001; j++){
            if(area[i][j]==1){
                x[idx]=i;
                y[idx]=j;
                idx++;
            }
        }
    }
    int n = x[0], m = x[0], a = y[0], b = y[0];
    for (int i = 1; i < idx; i++) {
        n = min(n, x[i]);
        m = max(m, x[i]);
        a = min(a, y[i]);
        b = max(b, y[i]);
    }
    if(idx==0){
        cout << 0;
        return 0;
    }
    cout << (m-n+1)*(b-a+1);
    return 0;
}