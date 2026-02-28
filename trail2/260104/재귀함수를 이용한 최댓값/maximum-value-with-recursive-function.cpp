#include <iostream>

using namespace std;

int n;
int arr[100];

int maxarr(int arr[], int idx){
    if(idx==n-1){
        return arr[idx];
    }
    int m = maxarr(arr, idx+1);
    if(arr[idx]>m){
        return arr[idx];
    }
    else{
        return m;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << maxarr(arr,0);

    return 0;
}