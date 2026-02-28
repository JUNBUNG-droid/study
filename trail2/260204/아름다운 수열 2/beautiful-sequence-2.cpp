#include <iostream>

using namespace std;

int N, M;
int A[100], B[100], cntarr[101]={};

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    // Please write your code here.
    int ans=0;
    for(int i=0; i<M; i++){
        cntarr[B[i]]++;
    }
    for(int i=0; i<N-M+1; i++){
        int arr[101]={};
        for(int j=i; j<i+M; j++){
            arr[A[j]]++;
        }
        int cnt=0;
        for(int j=0; j<101; j++){
            if(cntarr[j]==0&&arr[j]==0) continue;
            if(cntarr[j]==arr[j]) cnt+=arr[j];
        }
        if(cnt==M) ans++;
    }
    cout << ans;
    return 0;
}