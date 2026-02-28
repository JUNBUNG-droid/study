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
    for(int i=0; i<M; i++){
        record[student[i]]++;
        if(record[student[i]]==K){
            cout << student[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}