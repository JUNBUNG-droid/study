#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];
int sum[1000];

void change(int arr[]){
    sort(nums,nums+2*N);
    for(int i=0; i<N; i++){
        sum[i]=arr[i]+arr[2*N-i-1];
    }
}

int max(int arr[], int idx){
    if(idx==N-1){
        return arr[idx];
    }
    int m = max(arr, idx+1);
    if(m<arr[idx]){
        return arr[idx];
    }
    else{
        return m;
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    change(nums);
    cout << max(sum,0);
    return 0;
}
