#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int T, a, b, x;
char c;
char position[1001]={};

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c >> x;
        position[x] = c;
    }

    // Please write your code here.
    int cnt=0;
    for(int i=a; i<=b; i++){
        int minS=2000;
        int minN=2000;
        for(int j=0; j<1001; j++){
            if(position[j]=='S'){
                minS=min(minS,abs(i-j));
            }
            if(position[j]=='N'){
                minN=min(minN,abs(i-j));
            }
        }
        if(minS<=minN) cnt++;
    }
    cout << cnt;
    return 0;
}