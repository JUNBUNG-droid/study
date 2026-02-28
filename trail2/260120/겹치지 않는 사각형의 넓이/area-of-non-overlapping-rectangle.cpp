#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int area[2001][2001]={};

int OFFSET=1000;

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.

    for(int i=0; i<2; i++){
        for(int j=x1[i]; j<x2[i]; j++){
            for(int k=y1[i]; k<y2[i]; k++){
                area[j+OFFSET][k+OFFSET]=1;
            }
        }
    }

    for(int j=x1[2]; j<x2[2]; j++){
        for(int k=y1[2]; k<y2[2]; k++){
            area[j+OFFSET][k+OFFSET]=2;
        }
    }

    int cnt=0;
    for(int j=0; j<2001; j++){
        for(int k=0; k<2001; k++){
            if(area[j][k]==1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}