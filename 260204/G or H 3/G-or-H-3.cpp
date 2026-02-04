#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N, K;
int x[100];
char c[10000];

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> x[i] >> c[x[i]];
    }

    // Please write your code here.
    int max_val=INT_MIN;
    for(int i=1; i<10000-K; i++){
        int score=0;
        for(int j=i; j<i+K+1; j++){
            if(c[j]=='G') score++;
            else if(c[j]=='H') score+=2; 
        }
        max_val=max(max_val, score);
    }
    cout << max_val;
    return 0;
}