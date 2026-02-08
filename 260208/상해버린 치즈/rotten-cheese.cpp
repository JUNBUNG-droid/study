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

    int cheese[50]={};
    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
        for(int j=0; j<D; j++){
            //상한 치즈 후보군 고르기
            if(sick_p[i]==p[j]){
                if(t[j]<sick_t[i]) cheese[m[j]]=m[j];
            }
        }
    }

    // Please write your code here.
    int max=0;
    for(int i=1; i<=M; i++){
        int cnt=0;
        for(int j=0; j<D; j++){
            if(cheese[i]==m[j]) cnt++;
        }
        if(max<cnt) max=cnt;
    }
    cout << max;
    return 0;
}