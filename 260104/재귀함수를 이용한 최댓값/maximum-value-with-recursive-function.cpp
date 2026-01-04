#include <iostream>

using namespace std;

int n;
int arr[100];

int maxarr(int arr[], int idx, int idx2){
    if(idx==n-1){
        return arr[0];
    }
    if(arr[0]<arr[idx2]){
        idx++;
        return maxarr(arr+1, idx, idx2);
    }
    else{
        idx++;
        return maxarr(arr, idx, idx2+1);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << maxarr(arr,0,1);

    return 0;
}