#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[100], B[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int max_t=0;
    for(int i=0; i<N; i++){
        int cnt[1000]={};
        for(int j=0; j<N; j++){
            if(i==j) continue;
            for(int k=A[j]; k<B[j]; k++){
                cnt[k]++;
            }
            int time=0;
            for(int k=0; k<1000; k++){
                if(cnt[k]!=0) time++;
            }
            max_t=max(max_t, time);
        }
    }
    cout << max_t;
    return 0;
}