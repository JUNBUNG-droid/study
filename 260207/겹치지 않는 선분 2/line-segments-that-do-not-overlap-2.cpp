#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

bool overlap(int i, int j){
    return (x1[j]<=x2[i]&&x1[j]>=x1[i])&&(x2[j]<=x2[i]&&x2[j]>=x1[i]);
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int cnt=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j) continue;
            if(overlap(i,j)) cnt+=2;
        }
    }
    cout << cnt;
    return 0;
}