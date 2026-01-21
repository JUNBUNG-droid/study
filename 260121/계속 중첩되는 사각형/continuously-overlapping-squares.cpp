#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int area[300][300];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                if(i%2==0){
                    area[j][k]=1;
                }
                else{
                    area[j][k]=2;
                }
            }
        }
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0; i<300; i++){
        for(int j=0; j<300; j++){
            if(area[i][j]==2){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}