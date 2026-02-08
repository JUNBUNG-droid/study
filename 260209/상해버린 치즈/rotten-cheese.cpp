#include <iostream>

using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];

int main() {
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    int cheese[51]={};
    for (int i = 0; i < S; i++) {
        bool ate_this[51]={};
        cin >> sick_p[i] >> sick_t[i];
        for(int j=0; j<D; j++){
            //상한 치즈 후보군 고르기
            if(p[j] == sick_p[i] && t[j] < sick_t[i])
                ate_this[m[j]]=true;
        }
        for(int j=1; j<=M; j++){
            if(ate_this[j]) cheese[j]++;
        }
    }

    // Please write your code here.
    int max=0;
    for(int i=1; i<=M; i++){
        if(cheese[i] != S) continue;
        int cnt=0;
        // 같은 치즈를 또 먹을 수 있으므로 중복 방지
        bool ate[51]={};
        for(int j=0; j<D; j++){
            if(i==m[j]) ate[p[j]]=true;
        }
        for(int j=1; j<=N; j++){
            if(ate[j]) cnt++;
        }
        if(max<cnt) max=cnt;
    }
    cout << max;
    return 0;
}