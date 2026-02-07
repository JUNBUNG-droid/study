#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

long long ccw(long long ax, long long ay,
              long long bx, long long by,
              long long cx, long long cy){
    return (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
}

bool intersect(int i, int j){
    long long t1 = ccw(x1[i], 0, x2[i], 1, x1[j], 0);
    long long t2 = ccw(x1[i], 0, x2[i], 1, x2[j], 1);
    long long t3 = ccw(x1[j], 0, x2[j], 1, x1[i], 0);
    long long t4 = ccw(x1[j], 0, x2[j], 1, x2[i], 1);
    
    if(t1 == 0 && t2 == 0){
        long long a1 = min(x1[i], x2[i]);
        long long a2 = max(x1[i], x2[i]);
        long long b1 = min(x1[j], x2[j]);
        long long b2 = max(x1[j], x2[j]);
        return max(a1, b1) <= min(a2, b2);
    }

    return t1 * t2 <= 0 && t3 * t4 <= 0;
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
            if(intersect(i,j)) cnt++;
        }
    }
    cout << cnt;
    return 0;
}