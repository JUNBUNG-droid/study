#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int record[101];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Please write your code here.
    for(int i=1; i<=N; i++){
        for(int j=0; j<M; j++){
            if(student[j]==i){
                record[i]++;
            }
            if(record[i]>=K){
                cout << i;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}