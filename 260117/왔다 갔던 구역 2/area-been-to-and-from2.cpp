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
            for(int j = 0; j<=a; j++){
                x[point+j]++;
            }
            for(int j = 0; j<a; j++){
                point++;
            }
        }
        else if(dir=='L'){
            for(int j = 0; j<=a; j++){
                x[point-j]++;
            }
            for(int j = 0; j<a; j++){
                point--;
            }
        }
    }

    int sum=0;
    for(int i=0; i<299; i++){
        if(x[i]<2&&x[i+1]>=2){
                sum+=i+1;
            }
        if(x[i]>=2&&x[i+1]<2){
                sum-=i;
            }
    }
    cout << abs(sum);
    return 0;
}