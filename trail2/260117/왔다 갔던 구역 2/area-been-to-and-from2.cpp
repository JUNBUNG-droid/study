#include <iostream>
#include <cmath>
using namespace std;

int n;
int x[300]={};
char dir;

int main() {
    cin >> n;
    int point = 150;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a >> dir;
        if(dir=='R'){
            for(int j = 0; j<a; j++){
                x[point]++;
                point++;
            }
        }
        else if(dir=='L'){
            for(int j = 0; j<a; j++){
                point--;
                x[point]++;
            }
        }
    }

    int len=0;
    for(int i=0; i<300; i++){
        if(x[i]>=2){
            len++;
        }
    }
    cout << len;
    return 0;
}