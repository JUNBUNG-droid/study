#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    //폭탄 하나 정하기
    int max_num=-1;
    for(int i=0; i<N-K; i++){
        //거리 내 폭탄 확인
        for(int j=1; j<=K; j++){
            if(num[i]==num[i+j]) max_num=max(max_num, num[i+j]);
        }
    }
    cout << max_num;
    return 0;
}