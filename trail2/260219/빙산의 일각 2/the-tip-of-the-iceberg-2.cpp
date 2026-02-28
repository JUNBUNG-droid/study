#include <iostream>

using namespace std;

int n;
int h[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    // Please write your code here.
    int maxh=0;
    for(int i=0; i<n; i++){
        if(maxh<h[i]) maxh=h[i];
    }

    int ans=0;
    for(int i=1; i<=maxh; i++){
        int cnt=0;
        bool part=false;
        for(int j=0; j<n; j++){
            if(h[j]-i>0){
                if(!part){
                    part=true;
                    cnt++;
                }
            } 
            else{
                part=false;
            }
        }
        if(ans<cnt) ans=cnt;
    }
    cout << ans;
    return 0;
}