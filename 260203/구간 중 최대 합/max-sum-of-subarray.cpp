#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int max_val=INT_MIN;
    for(int i=0; i<n-k+1; i++){
        int sum=arr[i]+arr[i+1]+arr[i+2];
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;
}