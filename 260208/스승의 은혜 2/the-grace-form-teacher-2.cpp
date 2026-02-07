#include <iostream>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    int max_cnt=0;
    for(int i=0; i<N; i++){
        int money=B, cnt=0;
        for(int j=0; j<N; j++){
            int cost=P[j];
            if(i==j){
                cost=P[j]/2;
            }
            if(money-cost<0) break;
            money-=cost;
            cnt++;
        }
        max_cnt=max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}