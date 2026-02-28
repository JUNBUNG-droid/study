#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int area[1000][1000];
int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        for(int j=x[i]; j<x[i]+8; j++){
            for(int k=y[i]; k<y[i]+8; k++){
                area[j+100][k+100]=1;
            }
        }
    }
    int cnt=0;
    // Please write your code here.
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            if(area[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}