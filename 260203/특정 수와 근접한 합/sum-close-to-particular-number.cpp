#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int minus=INT_MAX;
    for(int n1 = 0; n1 < N; n1++){
        for(int n2 = n1 + 1; n2 < N; n2++){
            int sum = 0;
            for(int i = 0; i < N; i++){
                if(i == n1 || i == n2) continue;
                sum += arr[i];
            }
            minus = min(minus, abs(S - sum));
        }
    }
    cout << minus;
    return 0;
}