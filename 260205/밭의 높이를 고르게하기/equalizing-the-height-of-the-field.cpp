#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int min = INT_MAX;
    for(int i=0; i<N-T+1; i++){
        int cost=0;
        for(int j=i; j<i+T; j++){
            cost+=abs(arr[j]-H);
        }
        if(cost<min) min=cost;
    }
    cout << min;
    return 0;
}