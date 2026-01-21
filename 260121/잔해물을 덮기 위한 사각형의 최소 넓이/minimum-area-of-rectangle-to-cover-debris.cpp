#include <iostream>
#include <algorithm>
using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int area[3000][3000];

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

    int minx=0, maxx=0, miny=0, maxy=0;
    bool first=true;
    for(int i=0; i<3000; i++){
        for(int j=0; j<3000; j++){
            if(area[i][j]==1){
                int x=i-1000;
                int y=j-1000;
                if(first){
                    minx=x;
                    miny=y;
                    maxx=x;
                    maxy=y;
                    first=false;
                }
                else{
                    minx=min(minx,x);
                    maxx=max(maxx,x);
                    miny=min(miny,y);
                    maxy=max(maxy,y);
                }
            }
        }
    }
    if(first){
        cout << 0;
    }
    else{
        cout << (maxx - minx + 1) * (maxy - miny + 1);
    }
    return 0;
}