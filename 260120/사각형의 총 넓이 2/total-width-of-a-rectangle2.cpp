#include <iostream>
#include <algorithm>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];
int x[200][200]={};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.
    int minx1=0, minx2=0, miny1=0, miny2=0;
    for(int i=0; i<N; i++){
        if(minx1>x1[i]){
            minx1=x1[i];
        }
        if(minx2>x2[i]){
            minx2=x2[i];
        }
        if(miny1>y1[i]){
            miny1=y1[i];
        }
        if(miny2>y2[i]){
            miny2=y2[i];
        }
    }

    int min=minx1;
    if(min>minx2){
        min=minx2;
    }
    if(min>miny1){
        min=miny1;
    }
    if(min>miny2){
        min=miny2;
    }

    for(int i=0; i<N; i++){
        for(int j=x1[i]-min; j<x2[i]-min; j++){
            for(int k=y1[i]-min; k<y2[i]-min; k++){
                x[j][k]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0; i<200; i++){
        for(int j=0; j<200; j++){
            if(x[i][j]==1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}